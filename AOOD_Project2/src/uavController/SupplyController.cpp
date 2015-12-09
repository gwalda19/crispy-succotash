//
//  SupplyController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#include "SupplyController.h"
#include "uavLogger.h"



SupplyController::SupplyController( automaticDutiesProvider* next_duty_provider )
{
  this->next_duty_provider = next_duty_provider;
}

SupplyController::~SupplyController()
{
}

void SupplyController::dropSupply()
{
  uavLogger::getInstance()->log("Supply is being dropped");
}

void SupplyController::performMissionDuty( uavMissionModes::uavMissionTypesEnum mission_type )
{
  if( mission_type == uavMissionModes::SUPPLY_MISSION )
	uavLogger::getInstance()->log("Perform the automatic supply mission");
  else
	next_duty_provider->performMissionDuty( mission_type );
}
