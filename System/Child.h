/**
 * @file ChildState.h
 * @brief Declaration of the ChildState class.
 */

#ifndef CHILDSTATE_H
#define CHILDSTATE_H

#include <string>
#include "cStates.h"



/**
 * @class ChildState
 * @brief Represents the Child state of a citizen.
 *
 * Implements behaviors specific to child citizens.
 */
class ChildState : public CitizenState {
public:

    void handle(Citizen* citizen) override;
    /**
     * @brief Gets the name of the state.
     * 
     * @return std::string The state name "Child".
     */
    std::string getStateName() const override;

};

#endif 
