/*
 * automaticDutiesProvider.h
 *
 *  Created on: Dec 9, 2015
 *      Author: dgwalthney
 */

#ifndef AUTOMATICDUTIESPROVIDER_H_
#define AUTOMATICDUTIESPROVIDER_H_

#include "MissionModes.h"

class automaticDutiesProvider
{
  public:

    virtual ~automaticDutiesProvider() {}

    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type ) = 0;
};

#endif /* AUTOMATICDUTIESPROVIDER_H_ */
