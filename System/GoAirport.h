/**
 * @file GoAirport.h
 * @brief Part of the command design pattern allowing a citizen to travel from the current position to an airport node in the road network.
 */

#ifndef GOAIRPORT_H
#define GOAIRPORT_H

#include "GoToCommand.h"
#include "Citizen.h"
#include "RoadNetWork.h"
#include "Node.h"

#include <iostream>
using namespace std;

/**
 * @class GoAirport
 * @brief A concrete command class that allows a citizen to travel from their current position to an airport.
 * 
 * This class is part of the Command design pattern and simulates the citizen's journey to an airport within the road network.
 */
class GoAirport : public GoToCommand
{
private:
    Citizen* citizen;           /**< Pointer to the citizen traveling to the airport */
    Node* destination;          /**< Pointer to the airport node destination */
    RoadNetwork* roadNetwork;   /**< Pointer to the road network used for navigation */

public:
    /**
     * @brief Constructor for the GoAirport class.
     * 
     * Initializes a GoAirport command for the specified citizen to simulate their journey to an airport.
     * 
     * @param citizen A pointer to the Citizen object representing the person traveling to the airport.
     * @param roadNetwork A pointer to the RoadNetwork object used for navigating to the airport.
     */
    GoAirport(Citizen* citizen, RoadNetwork* roadNetwork);
};

#endif
