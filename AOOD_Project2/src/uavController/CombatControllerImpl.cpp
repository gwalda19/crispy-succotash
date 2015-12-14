//
//  CombatController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#include "CombatControllerImpl.h"
#include "../uavLogger/uavLogger.h"

CombatControllerImpl::CombatControllerImpl(
                   automaticDutiesProvider* next_duty_provider )
{
  this->next_duty_provider = next_duty_provider;
}

CombatControllerImpl::~CombatControllerImpl()
{
}

void CombatControllerImpl::fireMissile()
{
  uavLogger::getInstance()->log( "Missile is being fired" );
}

void CombatControllerImpl::fireGuns()
{
  uavLogger::getInstance()->log( "Guns activated at given target" );
}

void CombatControllerImpl::dropBombs()
{
  uavLogger::getInstance()->log( "Bay Doors are Opening" );
  //wait 2 secs
  uavLogger::getInstance()->log( "Bombs Being Released!" );
  //wait 2 secs
  uavLogger::getInstance()->log( "Bay Doors are Closing" );
}

void CombatControllerImpl::lockOnTarget()
{
  uavLogger::getInstance()->log( "Target Locked On" );
}

void CombatControllerImpl::breakEngage()
{
  uavLogger::getInstance()->log( "Engagement Broken" );
}

void CombatControllerImpl::performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type )
{
  if( mission_type == uavMissionModes::COMBAT_MISSION )
    uavLogger::getInstance()->log( "Perform the automatic combat mission" );
  else
    next_duty_provider->performMissionDuty( mission_type );
}
