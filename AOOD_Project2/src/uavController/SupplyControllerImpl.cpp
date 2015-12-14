//
//  SupplyController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#include "SupplyControllerImpl.h"
#include "../uavLogger/uavLogger.h"

SupplyControllerImpl::SupplyControllerImpl()
{
}

SupplyControllerImpl::~SupplyControllerImpl()
{
}

void SupplyControllerImpl::dropSupply()
{
  uavLogger::getInstance()->log( "Supply is being dropped" );
}

void SupplyControllerImpl::performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type )
{
  if( mission_type == uavMissionModes::SUPPLY_MISSION )
    uavLogger::getInstance()->log( "Perform the automatic supply mission" );
  else
    uavLogger::getInstance()->log( "Unhandled Mission Type." );
}
