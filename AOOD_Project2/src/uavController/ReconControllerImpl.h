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

class ReconControllerImpl : public ReconController,
                            public automaticDutiesProvider
{
  public:

    ReconControllerImpl( automaticDutiesProvider* next_duty_provider );

    virtual ~ReconControllerImpl();

    virtual void takePicture();
    virtual void transmitPicture();

    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type );

  private:

    automaticDutiesProvider* next_duty_provider;
};
#endif /* ReconController_h */
