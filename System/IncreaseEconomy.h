#ifndef INCREASEECONOMY_H
#define INCREASEECONOMY_H

#include "EventsCommand.h"

/**
 * @class IncreaseEconomy
 * @brief A concrete command that simulates an economic boom, leading to increased job creation and a rise in citizen net worth.
 * 
 * The `IncreaseEconomy` class inherits from `EventsCommand` and represents an event where the economy experiences 
 * significant growth. This can lead to more industrial and commercial buildings, providing new job opportunities 
 * and increasing the wealth of citizens. The economic boom also stimulates various aspects of city life, 
 * including real estate, consumption, and public services.
 * 
 * @details When this command is executed, it will trigger processes that expand the city’s industrial and 
 * commercial sectors, improve citizen wealth, and possibly lead to other positive economic effects. 
 * The increased economic activity will create a need for additional resources, infrastructure, and services 
 * to support the city's growth.
 * 
 * @note This class works in tandem with other city management systems to simulate a holistic economic boom.
 * 
 * @author LeboGang
 */
class IncreaseEconomy : public EventsCommand
{
private:
    // Any private data members related to the economic event can be added here.

public:
    /**
     * @brief Default constructor for the IncreaseEconomy event.
     * 
     * Initializes the IncreaseEconomy event, setting up any necessary parameters or configurations
     * for handling the economic growth within the city simulation.
     */
    IncreaseEconomy();

    /**
     * @brief Destructor for the IncreaseEconomy event.
     * 
     * Cleans up any resources used by the IncreaseEconomy event when it is no longer needed.
     */
    ~IncreaseEconomy();

    /**
     * @brief Executes the IncreaseEconomy event, simulating an economic boom.
     * 
     * @details This function will trigger an economic boom by expanding industrial and commercial 
     * sectors, increasing job creation, and improving the financial standing of citizens. It sets off 
     * a chain of positive effects that may require adjustments to housing, transportation, and other 
     * infrastructure elements to accommodate economic growth.
     */
    void execute() override;

    /**
     * @brief Expands industrial sectors to create new job opportunities.
     */
    void expandIndustrialSector();

    /**
     * @brief Increases the development of commercial buildings to boost the local economy.
     */
    void developCommercialBuildings();

    /**
     * @brief Improves citizens' net worth by increasing income and employment opportunities.
     */
    void enhanceCitizenNetWorth();

    /**
     * @brief Adjusts housing policies to accommodate new workers and economic migrants.
     */
    void adjustHousingForEconomicGrowth();

    /**
     * @brief Increases resource allocation to support the growing industrial and commercial sectors.
     */
    void allocateResourcesForGrowth();

    /**
     * @brief Assesses the long-term economic impact of the boom on the city's sustainability.
     */
    void assessLongTermEconomicImpact();

    /**
     * @brief Boosts city-wide infrastructure to support economic expansion, including roads and utilities.
     */
    void improveCityInfrastructure();
};

#endif // INCREASEECONOMY_H
