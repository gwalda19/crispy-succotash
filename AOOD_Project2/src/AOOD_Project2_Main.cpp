//============================================================================
// Name        : AOOD_Project2_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Controllers
#include "SupplyController.h"
#include "ReconController.h"
#include "CombatController.h"

//Operators
#include "uavAutomaticOperator.h"
#include "uavUserOperator.h"

#include "MissionModes.h"
#include "UAVFactory.h"
#include "uavLogger.h"

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
  uavLogger::getInstance()->log( "!!!Hello World!!! Can You see me?");

  //Building of the Mission Controllers..
  SupplyController* supply_controller = new SupplyController();
  ReconController*  recon_controller  = new ReconController( supply_controller );
  CombatController* combat_controller = new CombatController( recon_controller );

  //Build the operator controllers
  uavAutomaticOperator* auto_operator = new uavAutomaticOperator();
  auto_operator->initialize( combat_controller );

  uavUserOperator* user_operator = new uavUserOperator();
  user_operator->initialize( supply_controller,
                             recon_controller,
                             combat_controller );


  combat_controller->performMissionDuty( uavMissionModes::COMBAT_MISSION );
  combat_controller->performMissionDuty( uavMissionModes::RECON_MISSION );
  combat_controller->performMissionDuty( uavMissionModes::SUPPLY_MISSION );
  combat_controller->performMissionDuty( uavMissionModes::NO_MISSION );

  auto_operator->update();

  user_operator->update();
  user_operator->fireMissile();
  user_operator->fireGun();
  user_operator->dropBomb();
  user_operator->lockTarget();
  user_operator->breakEngage();
  user_operator->takePicture();
  user_operator->transmitPictures();
  user_operator->dropSupplies();


  return 0;
}
