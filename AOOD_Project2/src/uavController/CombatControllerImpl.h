//
//  CombatController.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#ifndef CombatController_h
#define CombatController_h

#include "CombatController.h"
#include "automaticDutiesProvider.h"

///-----------------------------------------
///  This class handles the combat UAV duties.
///  It implements the CombatController interface
///  and the automaticDutiesProvider. This is the
///  first class in the automaticDutiesProvider
///  chain of responsibility. If the mission
///  is not combat, then it will pass it along
///  the chain.
///-----------------------------------------
class CombatControllerImpl : public CombatController,
                             public automaticDutiesProvider
{
  public:

    CombatControllerImpl( automaticDutiesProvider* next_duty_provider );
    virtual ~CombatControllerImpl();

    ///-------------------------------------
    ///  These functions are the implementations
    ///  of the CombatController interface.
    ///  These are the actions that can be performed
    ///  by the UAV if it is on a combat mission.
    ///-------------------------------------
    virtual void fireMissile();
    virtual void fireGuns();
    virtual void dropBombs();
    virtual void lockOnTarget();
    virtual void breakEngage();

    ///-------------------------------------
    ///  If the mission is combat, then
    ///  this class will handle the responsibility.
    ///  Otherwise it will pass it along to
    ///  the next class in the chain.
    ///-------------------------------------
    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type );

  private:

    automaticDutiesProvider* next_duty_provider;
};

#endif /* CombatController_h */
