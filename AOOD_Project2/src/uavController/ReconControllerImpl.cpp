//
//  ReconController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  08DEC15
//

#include "ReconControllerImpl.h"
#include "uavLogger.h"

ReconControllerImpl::ReconControllerImpl( automaticDutiesProvider* next_duty_provider )
{
  this->next_duty_provider = next_duty_provider;
}

ReconControllerImpl::~ReconControllerImpl()
{
}

void ReconControllerImpl::takePicture()
{
  uavLogger::getInstance()->log( "Taking picture" );
}

void ReconControllerImpl::transmitPicture()
{
  uavLogger::getInstance()->log( "Picture is being transmitted" );
}

void ReconControllerImpl::performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type )
{
  if( mission_type == uavMissionModes::RECON_MISSION )
    uavLogger::getInstance()->log( "Perform the automatic recon mission" );
  else
    next_duty_provider->performMissionDuty( mission_type );
}
