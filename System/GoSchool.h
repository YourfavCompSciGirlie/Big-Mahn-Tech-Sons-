/**
 * @file GoSchool.h
 * @brief Header file for the GoSchool class, which simulates a citizen going to school in a road network.
 * 
 * This file contains the declaration of the GoSchool class, which inherits from the GoToCommand class. 
 * It is responsible for handling the process of a citizen navigating the road network to reach a school destination.
 */

#ifndef GOSCHOOL_H
#define GOSCHOOL_H

#include <iostream>
#include "GoToCommand.h"
#include "Citizen.h"
#include "RoadNetWork.h"
#include "Node.h"

using namespace std;

/**
 * @class GoSchool
 * @brief A class representing the action of a citizen going to school within the road network.
 * 
 * This class is derived from GoToCommand and simulates the process of a citizen 
 * navigating the road network to reach their school destination.
 */
class GoSchool : public GoToCommand
{
private:
    Citizen* citizen;           /**< Pointer to the citizen who is going to school */
    Node* destination;          /**< Pointer to the destination (school node) */
    RoadNetwork* roadNetwork;   /**< Pointer to the road network used for navigation */

public:
    /**
     * @brief Constructor for the GoSchool class.
     * 
     * Initializes a GoSchool command for the specified citizen within the given road network.
     * 
     * @param citizen A pointer to the Citizen object representing the person going to school.
     * @param roadNetwork A pointer to the RoadNetwork object that the citizen will use to reach the destination.
     */
    GoSchool(Citizen* citizen, RoadNetwork* roadNetwork);
};

#endif
