/**
 * @file LoadsheddingCommand.h
 * @brief Defines the LoadsheddingCommand class for handling load-shedding events.
 */

#ifndef LOADSHEDDING_COMMAND_H
#define LOADSHEDDING_COMMAND_H

#include "EventsCommand.h"

/**
 * @class LoadsheddingCommand
 * @brief Concrete command class for managing load-shedding and power outages.
 */
class LoadsheddingCommand : public EventsCommand {
public:
    /**
     * @brief Cuts electricity to specific buildings during load-shedding.
     */
    void cutElectricityToBuildings();

    /**
     * @brief Notifies citizens of upcoming outages.
     */
    void notifyCitizensOfOutages();

    /**
     * @brief Schedules load-shedding events.
     */
    void scheduleLoadshedding();

    /**
     * @brief Allocates energy resources during load-shedding.
     */
    void allocateEnergyResources();

    /**
     * @brief Manages complaints related to utility outages.
     */
    void manageUtilityComplaints();

       /**
     * @brief starts/ends the command
     */
    void execute();
};

#endif // LOADSHEDDING_COMMAND_H
