#ifndef CITIZENSTATE_H
#define CITIZENSTATE_H

#include <string>

/**
 * @file cStates.h
 * @author u23539764
 * @brief Declaration of the CitizenState abstract class and its derived states.
 */

class Citizen;

/**
 * @class CitizenState
 * @brief Abstract base class representing the state of a citizen.
 *
 * Defines the interface for different states of a citizen (e.g., Child, Adult, Pensioner).
 */
class CitizenState {
public:
    /**
     * @brief Virtual destructor.
     */
    virtual ~CitizenState() {}

    /**
     * @brief Gets the name of the state.
     * 
     * @return std::string The state name.
     */
    virtual std::string getStateName() const = 0;


};

#endif 
