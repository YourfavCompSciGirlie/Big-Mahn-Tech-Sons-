
/**
 * @file AdultState.h
 * @brief Declaration of the AdultState class.
 */


#ifndef ADULTSTATE_H
#define ADULTSTATE_H

#include <string>
#include "cStates.h"

/**
 * @class AdultState
 * @brief Represents the Adult state of a citizen.
 *
 * Implements behaviors specific to adult citizens.
 */
class AdultState : public CitizenState {
public:
    void handle(Citizen* citizen) override;
    /**
     * @brief Gets the name of the state.
     * 
     * @return std::string The state name "Adult".
     */
    std::string getStateName() const override;
};

#endif 
