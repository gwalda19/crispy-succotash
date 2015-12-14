//
//  SupplyController.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#ifndef SupplyController_H
#define SupplyController_H

#include "SupplyController.h"
#include "automaticDutiesProvider.h"

///-----------------------------------------
///  This class handles the supply UAV duties.
///  It implements the SupplyController interface
///  and the automaticDutiesProvider. This is the
///  last class in the automaticDutiesProvider
///  chain of responsibility. If the mission
///  is not supply, then the mission is not
///  handled.
///-----------------------------------------
class SupplyControllerImpl : public SupplyController,
                             public automaticDutiesProvider
{
  public:

    SupplyControllerImpl();
    virtual ~SupplyControllerImpl();

    ///-------------------------------------
    ///  These functions are the implementations
    ///  of the SupplyController interface.
    ///  These are the actions that can be performed
    ///  by the UAV if it is on a supply mission.
    ///-------------------------------------
    virtual void dropSupply();

    ///-------------------------------------
    ///  If the mission is supply, then
    ///  this class will handle the responsibility.
    ///  Otherwise the mission isn't handled.
    ///-------------------------------------
    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type );

  private:

};

#endif /* SuppplyController_h */
