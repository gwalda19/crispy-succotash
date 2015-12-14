//
//  ReconController.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  08DEC15
//

#ifndef ReconController_h
#define ReconController_h

#include "ReconController.h"
#include "automaticDutiesProvider.h"

///-----------------------------------------
///  This class handles the recon UAV duties.
///  It implements the ReconController interface
///  and the automaticDutiesProvider. This is the
///  second class in the automaticDutiesProvider
///  chain of responsibility. If the mission
///  is not recon, then it will pass it along
///  the chain.
///-----------------------------------------
class ReconControllerImpl : public ReconController,
                            public automaticDutiesProvider
{
  public:

    ReconControllerImpl( automaticDutiesProvider* next_duty_provider );
    virtual ~ReconControllerImpl();

    ///-------------------------------------
    ///  These functions are the implementations
    ///  of the ReconController interface.
    ///  These are the actions that can be performed
    ///  by the UAV if it is on a recon mission.
    ///-------------------------------------
    virtual void takePicture();
    virtual void transmitPicture();

    ///-------------------------------------
    ///  If the mission is recon, then
    ///  this class will handle the responsibility.
    ///  Otherwise it will pass it along to
    ///  the next class in the chain.
    ///-------------------------------------
    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type );

  private:

    automaticDutiesProvider* next_duty_provider;
};
#endif /* ReconController_h */
