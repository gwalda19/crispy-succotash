//
//  ReconController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  08DEC15
//

#include "ReconController.h"
#include "uavLogger.h"

ReconController::ReconController()
{
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
