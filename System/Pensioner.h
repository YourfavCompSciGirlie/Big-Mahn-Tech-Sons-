/**
 * @file PensionerState.h
 * @brief Declaration of the PensionerState class.
 */
#ifndef PENSIONERSTATE_H
#define PENSIONERSTATE_H

#include <string>
#include "cStates.h"



/**
 * @class PensionerState
 * @brief Represents the Pensioner state of a citizen.
 *
 * Implements behaviors specific to pensioner citizens.
 */
class PensionerState : public CitizenState {
public:
    void handle(Citizen* citizen) override;
    /**
     * @brief Gets the name of the state.
     * 
     * @return std::string The state name "Pensioner".
     */
    std::string getStateName() const override;
};

#endif 
