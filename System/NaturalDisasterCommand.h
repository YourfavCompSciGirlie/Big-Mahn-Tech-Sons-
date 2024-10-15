/**
 * @file NaturalDisasterCommand.h
 * @brief Defines the NaturalDisasterCommand class for handling natural disaster events.
 */

#ifndef NATURAL_DISASTER_COMMAND_H
#define NATURAL_DISASTER_COMMAND_H

#include "EventsCommand.h"

/**
 * @class NaturalDisasterCommand
 * @brief Concrete command class for handling natural disaster events such as earthquakes, floods, and fires.
 */
class NaturalDisasterCommand : public EventsCommand {
public:
    /**
     * @brief Damages buildings in the city.
     */
    void damageBuildings();

    /**
     * @brief Evacuates citizens from affected areas.
     */
    void evacuateCitizens();

    /**
     * @brief Repairs the damaged infrastructure.
     */
    void repairInfrastructure();

    /**
     * @brief Blocks transport routes that are affected by the disaster.
     */
    void blockTransportRoutes();

    /**
     * @brief Provides emergency services to affected citizens.
     */
    void provideEmergencyServices();

    /**
     * @brief Manages the aftermath and reconstruction efforts.
     */
    void manageAftermathReconstruction();

       /**
     * @brief starts/ends the command
     */
    void execute();
};

#endif // NATURAL_DISASTER_COMMAND_H
