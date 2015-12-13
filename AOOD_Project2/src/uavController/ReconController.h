//
//  ReconController.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  08DEC15
//

#ifndef ReconController_h
#define ReconController_h

#include "automaticDutiesProvider.h"

class ReconController : public automaticDutiesProvider
{
  public:

    ReconController( automaticDutiesProvider* next_duty_provider );

    virtual ~ReconController();

    void takePicture();
    void transmitPicture();

    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type );

  private:

    automaticDutiesProvider* next_duty_provider;
};
#endif /* ReconController_h */
