//
//  CombatController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#include "CombatController.h"
#include "uavLogger.h"

CombatController::CombatController( automaticDutiesProvider* next_duty_provider )
{
  this->next_duty_provider = next_duty_provider;
}

CombatController::~CombatController()
{
}

void CombatController::fireMissile()
{
  uavLogger::getInstance()->log("Missile is being fired");
}

void CombatController::fireGuns()
{
  uavLogger::getInstance()->log("Guns activated at given target");
}

void CombatController::performMissionDuty( uavMissionModes::uavMissionTypesEnum mission_type )
{
  if( mission_type == uavMissionModes::COMBAT_MISSION )
    uavLogger::getInstance()->log("Perform the automatic combat mission");
  else
    next_duty_provider->performMissionDuty( mission_type );
}
