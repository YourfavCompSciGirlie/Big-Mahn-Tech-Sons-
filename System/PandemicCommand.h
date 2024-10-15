/**
 * @file PandemicCommand.h
 * @brief Defines the PandemicCommand class responsible for handling events related to a pandemic.
 */

#ifndef PANDEMIC_COMMAND_H
#define PANDEMIC_COMMAND_H

#include "EventsCommand.h"

/**
 * @class PandemicCommand
 * @brief Concrete command class that handles pandemic-related events.
 */
class PandemicCommand : public EventsCommand {
public:
    /**
     * @brief Imposes a lockdown in the city.
     */
    void imposeLockdown();

    /**
     * @brief Increases funding for healthcare services.
     */
    void increaseHealthcareFunding();

    /**
     * @brief Distributes vaccines to citizens.
     */
    void distributeVaccines();

    /**
     * @brief Quarantines citizens to prevent infection spread.
     */
    void quarantineCitizens();

    /**
     * @brief Manages citizen satisfaction during the pandemic.
     */
    void manageCitizenSatisfaction();

    /**
     * @brief Tracks the infection rates of the pandemic.
     */
    void trackInfectionRates();

       /**
     * @brief starts/ends the command
     */
    void execute();
};

#endif // PANDEMIC_COMMAND_H
