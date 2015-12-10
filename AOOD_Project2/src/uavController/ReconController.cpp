//
//  ReconController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  08DEC15
//

#include "ReconController.h"
#include "uavLogger.h"


ReconController::ReconController( automaticDutiesProvider* next_duty_provider )
{
  this->next_duty_provider = next_duty_provider;
}

ReconController::~ReconController()
{
}

void ReconController::takePicture()
{
  uavLogger::getInstance()->log("Taking picture");
}

void ReconController::transmitPicture()
{
  uavLogger::getInstance()->log("Picture is being transmitted");
}

void ReconController::performMissionDuty( uavMissionModes::uavMissionTypesEnum mission_type )
{
  if( mission_type == uavMissionModes::RECON_MISSION )
    uavLogger::getInstance()->log("Perform the automatic recon mission");
  else
    next_duty_provider->performMissionDuty( mission_type );
}
