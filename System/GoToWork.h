/**
 * @file GoToWork.h
 * @brief Part of the command design pattern allowing a citizen to travel from the current position to the work node in the road network.
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
 * @class GoToWork
 * @brief A concrete command class that allows a citizen to travel from their current position to their work destination.
 * 
 * This class is part of the Command design pattern and enables the simulation of a citizen's journey to work
 * within the road network, potentially adding income at the end of the journey.
 */
class GoToWork : public GoToCommand
{
private:
    Citizen* citizen;           /**< Pointer to the citizen traveling to work */
    Node* destination;          /**< Pointer to the work node destination */
    RoadNetwork* roadNetwork;   /**< Pointer to the road network used for navigation */

public:
    /**
     * @brief Constructor for the GoToWork class.
     * 
     * Initializes a GoToWork command for the specified citizen to simulate their journey to work and adds income upon arrival.
     * 
     * @param citizen A pointer to the Citizen object representing the person going to work.
     * @param roadNetwork A pointer to the RoadNetwork object used for navigating to the work destination.
     */
    GoToWork(Citizen* citizen, RoadNetwork* roadNetwork);
};

#endif
