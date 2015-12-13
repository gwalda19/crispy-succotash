/*
 * uavDatabase.cpp
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#include "uavDatabase.h"

uavDatabase::uavDatabase()
{
  current_uav_id = 0;
}

uavDatabase::~uavDatabase()
{
  for( int i = 0; i < current_uav_id; i++ )
    delete uavs[current_uav_id];
}

void uavDatabase::createUav( uavMissionModes::uavMissionTypesEnum mission )
{
  uavs[current_uav_id] = new uavData();
  uavs[current_uav_id]->mission_type = mission;

  current_uav_id++;
}

uavData* uavDatabase::getUavData( int uav_id )
{
  return uavs[uav_id];
}
