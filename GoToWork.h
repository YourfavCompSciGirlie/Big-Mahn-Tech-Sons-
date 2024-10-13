/**
 * @file GoToWork.h
 * @brief Part of the command design pattern in allow a citizen to travel from the current position to the work node in the road network
 */


#ifndef GOTOWORK_H
#define GOTOWORK_H

#include "GoToCommand.h"
#include "Citizen.h"
#include "RoadNetWork.h"
#include "Node.h"

#include <iostream>
using namespace std;


/**
 * @class  GoToWork
 * @brief   This class is a concrete command that allows a citizen to travel from the current position to the work
 */
class GoToWork : public GoToCommand
{
   private:
      Citizen* citizen;
      Node* destination;
      RoadNetwork* roadNetwork;

   public:
      GoToWork(Citizen* citizen, RoadNetwork* roadNetwork);
};

#endif