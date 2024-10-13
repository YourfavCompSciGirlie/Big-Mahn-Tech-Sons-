/**
 * @file RecessionCommand.h
 * @brief Defines the RecessionCommand class for handling city-wide recession events.
 */

#ifndef RECESSION_COMMAND_H
#define RECESSION_COMMAND_H

#include "EventsCommand.h"

/**
 * @class RecessionCommand
 * @brief Concrete command class for handling economic recession effects in the city.
 */
class RecessionCommand : public EventsCommand{
public:
    /**
     * @brief Raises taxes during the recession.
     */
    void raiseTaxes();

    /**
     * @brief Cuts public spending to balance the city budget.
     */
    void cutPublicSpending();

    /**
     * @brief Manages citizen dissatisfaction due to the recession.
     */
    void manageCitizenDissatisfaction();

    /**
     * @brief Closes some commercial buildings as they go out of business.
     */
    void closeCommercialBuildings();

    /**
     * @brief Increases unemployment due to the recession.
     */
    void increaseUnemployment();

    /**
     * @brief Boosts economic relief programs to aid struggling citizens.
     */
    void boostEconomicReliefPrograms();

    /**
     * @brief starts/ends the command
     */
    void execute();
};

#endif // RECESSION_COMMAND_H
