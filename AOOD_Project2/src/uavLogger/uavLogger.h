/*
 * uavLogger.h
 *
 *  Created on: Dec 8, 2015
 *      Author: David
 */

#ifndef UAVLOGGER_H_
#define UAVLOGGER_H_

#include <string>

class uavLogger
{
  public:

    virtual ~uavLogger();

    static uavLogger* getInstance();

    void log( std::string string_to_log );

  private:

    uavLogger() {}

    static uavLogger* single_instance;
};

#endif /* UAVLOGGER_H_ */
