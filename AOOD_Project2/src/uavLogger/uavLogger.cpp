/*
 * uavLogger.cpp
 *
 *  Created on: Dec 8, 2015
 *      Author: David
 */

#include "uavLogger.h"
#include <iostream>

uavLogger* uavLogger::single_instance = NULL;

uavLogger::~uavLogger()
{
  delete single_instance;
}

uavLogger* uavLogger::getInstance()
{
  if( !single_instance )
    single_instance = new uavLogger;

  return single_instance;
}

void uavLogger::log( std::string string_to_log )
{
  std::cout << string_to_log << std::endl;
}
