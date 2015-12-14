/*
 * uavAutomaticOperator.cpp
 *
 *  Created on: Dec 10, 2015
 *      Author: dgwalthney
 */

#include "uavAutomaticOperator.h"
#include "../uavController/automaticDutiesProvider.h"
#include "../uavLogger/uavLogger.h"

uavAutomaticOperator::uavAutomaticOperator()
{

}

uavAutomaticOperator::~uavAutomaticOperator()
{

}

void uavAutomaticOperator::initialize(
                   automaticDutiesProvider* duties_provider )
{
  this->duties_provider = duties_provider;
}

void uavAutomaticOperator::update()
{
  uavLogger::getInstance()->log( "Performing Automatic Operator Update" );

  duties_provider->performMissionDuty( uavMissionModes::COMBAT_MISSION );
  duties_provider->performMissionDuty( uavMissionModes::RECON_MISSION );
  duties_provider->performMissionDuty( uavMissionModes::SUPPLY_MISSION );
  duties_provider->performMissionDuty( uavMissionModes::NO_MISSION );
}
