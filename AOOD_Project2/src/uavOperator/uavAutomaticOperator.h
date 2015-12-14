/*
 * uavAutomaticOperator.h
 *
 *  Created on: Dec 10, 2015
 *      Author: dgwalthney
 */

#ifndef UAVAUTOMATICOPERATOR_H_
#define UAVAUTOMATICOPERATOR_H_

class automaticDutiesProvider;

///-----------------------------------------
///  This class handles the automatic operations
///  of the UAV.
///-----------------------------------------
class uavAutomaticOperator
{
  public:

    uavAutomaticOperator();
    virtual ~uavAutomaticOperator();

    void initialize( automaticDutiesProvider* duties_provider );

    void update();

  private:

    automaticDutiesProvider* duties_provider;
};

#endif /* UAVAUTOMATICOPERATOR_H_ */
