//============================================================================
// Name        : AOOD_Project2_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Operators
#include "uavAutomaticOperator.h"
#include "uavUserOperator.h"

#include "MissionModes.h"
#include "uavFactoryImpl.h"
#include "uavLogger.h"

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
  uavLogger::getInstance()->log( "!!!Hello World!!! Can You see me?");

  uavFactoryImpl* uav_factory = new uavFactoryImpl();

  //Build the operator controllers
  uavAutomaticOperator* auto_operator = new uavAutomaticOperator();
  auto_operator->initialize( uav_factory->getDutiesProvider() );

  uavUserOperator* user_operator = new uavUserOperator( uav_factory );

  uav_factory->getDutiesProvider()->performMissionDuty( uavMissionModes::COMBAT_MISSION );
  uav_factory->getDutiesProvider()->performMissionDuty( uavMissionModes::RECON_MISSION );
  uav_factory->getDutiesProvider()->performMissionDuty( uavMissionModes::SUPPLY_MISSION );
  uav_factory->getDutiesProvider()->performMissionDuty( uavMissionModes::NO_MISSION );

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
