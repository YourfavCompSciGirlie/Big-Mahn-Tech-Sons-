#ifndef GOTOENT_H
#define GOTOENT_H

#include "GoToCommand.h"
#include "Citizen.h"
#include "RoadNetWork.h"
#include "Node.h"

#include <iostream>
using namespace std;

/**
 * @class  GoToEnt
 * @brief   This class is a concrete command that allows a citizen to travel from the current position to a random entertainment node
 */


class GoToEnt : public GoToCommand
{
   private:
      Citizen* citizen;
      Node* destination;
      RoadNetwork* roadNetwork;

   public:
      GoToEnt(Citizen* citizen, RoadNetwork* roadNetwork);
};


#endif