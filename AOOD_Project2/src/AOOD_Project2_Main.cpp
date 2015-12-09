//============================================================================
// Name        : AOOD_Project2_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "UAVFactory.h"
#include "uavLogger.h"

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
  uavLogger::getInstance()->log( "!!!Hello World!!! Can You see me? - ANT");

  return 0;
}
