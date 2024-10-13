#ifndef PENSIONERSTATE_H
#define PENSIONERSTATE_H

#include <string>
#include "cStates.h"

/**
 * @file PensionerState.h
 * @brief Declaration of the PensionerState class.
 */

/**
 * @class PensionerState
 * @brief Represents the Pensioner state of a citizen.
 *
 * Implements behaviors specific to pensioner citizens.
 */
class PensionerState : public CitizenState {
public:
    /**
     * @brief Gets the name of the state.
     * 
     * @return std::string The state name "Pensioner".
     */
    std::string getStateName() const override;
};

#endif 
