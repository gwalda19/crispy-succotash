/*
 * uavDataStruct.h
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#ifndef UAVDATASTRUCT_H_
#define UAVDATASTRUCT_H_

#include "MissionModes.h"

struct uavData
{
  double x_coord;    //Ant replace
  double y_coord;    //Ant replace
  double z_coord;    //Ant replace
  double track_rate; //Ant replace
  bool return_to_base;
  bool night_vision_enabled;
  int uav_id;
  int missile_inventory;
  uavMissionModes::uavMissionTypesEnum mission_type;


  uavData()
  {
    initialize();
  }

  ~uavData() {}

  void initialize()
  {
    x_coord = 0.0;
    y_coord = 0.0;
    z_coord = 0.0;
    return_to_base = false;
    night_vision_enabled = false;
    uav_id = 0;
    missile_inventory = 5;
    mission_type = uavMissionModes::NO_MISSION;
  }

};


#endif /* UAVDATASTRUCT_H_ */
