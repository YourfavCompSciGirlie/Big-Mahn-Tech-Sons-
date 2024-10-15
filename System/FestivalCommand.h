/**
 * @file FestivalCommand.h
 * @brief Defines the FestivalCommand class for organizing and managing city-wide festivals.
 */

#ifndef FESTIVAL_COMMAND_H
#define FESTIVAL_COMMAND_H

#include "EventsCommand.h"

/**
 * @class FestivalCommand
 * @brief Concrete command class for organizing city festivals and handling the impact.
 */
class FestivalCommand : public EventsCommand {
public:
    /**
     * @brief Promotes the city-wide festival through the PR department.
     */
    void promoteFestival();

    /**
     * @brief Boosts citizen happiness by organizing the festival.
     */
    void boostCitizenHappiness();

    /**
     * @brief Increases utility consumption during the festival.
     */
    void increaseUtilityConsumption();

    /**
     * @brief Allocates necessary resources for the festival.
     */
    void allocateResourcesForFestival();

    /**
     * @brief Manages traffic congestion during the festival.
     */
    void manageTrafficDuringFestival();

    /**
     * @brief Assesses the economic impact of the festival on the city.
     */
    void assessEconomicImpactOfFestival();

       /**
     * @brief starts/ends the command
     */
    void execute();
};

#endif // FESTIVAL_COMMAND_H
