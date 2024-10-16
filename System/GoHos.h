/**
 * @file GoHos.h
 * @brief Header file for the GoHos class, which simulates a citizen going to a hospital in a road network.
 * 
 * This file contains the declaration of the GoHos class, which inherits from the GoToCommand class. 
 * It is responsible for handling the process of a citizen navigating the road network to reach a hospital destination.
 */

#ifndef GOHOS_H
#define GOHOS_H

#include <iostream>
#include "GoToCommand.h"
#include "Citizen.h"
#include "RoadNetWork.h"
#include "Node.h"

using namespace std;

/**
 * @class GoHos
 * @brief A class representing the action of a citizen going to a hospital within the road network.
 * 
 * This class is derived from GoToCommand and simulates the process of a citizen 
 * navigating the road network to reach their hospital destination.
 */
class GoHos : public GoToCommand
{
private:
    Citizen* citizen;           /**< Pointer to the citizen who is going to the hospital */
    Node* destination;          /**< Pointer to the destination (hospital node) */
    RoadNetwork* roadNetwork;   /**< Pointer to the road network used for navigation */

public:
    /**
     * @brief Constructor for the GoHos class.
     * 
     * Initializes a GoHos command for the specified citizen within the given road network.
     * 
     * @param citizen A pointer to the Citizen object representing the person going to the hospital.
     * @param roadNetwork A pointer to the RoadNetwork object that the citizen will use to reach the destination.
     */
    GoHos(Citizen* citizen, RoadNetwork* roadNetwork);
};

#endif
