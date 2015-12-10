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

#include "MissionModes.h"
#include "UAVFactory.h"
#include "uavLogger.h"

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
  uavLogger::getInstance()->log( "!!!Hello World!!! Can You see me? - ANT");

  //Building of the Mission Controllers..
  SupplyController* supply_controller = new SupplyController();
  ReconController*  recon_controller  = new ReconController( supply_controller );
  CombatController* combat_controller = new CombatController( recon_controller );


  combat_controller->performMissionDuty( uavMissionModes::COMBAT_MISSION );
  combat_controller->performMissionDuty( uavMissionModes::RECON_MISSION );
  combat_controller->performMissionDuty( uavMissionModes::SUPPLY_MISSION );
  combat_controller->performMissionDuty( uavMissionModes::NO_MISSION );

  return 0;
}
