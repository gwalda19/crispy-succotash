//
//  SupplyController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#include "SupplyController.h"
#include "uavLogger.h"

SupplyController::SupplyController()
{
}

SupplyController::~SupplyController()
{
}

void SupplyController::dropSupply()
{
  uavLogger::getInstance()->log("Supply is being dropped");
}
