/**
 * @file EventsCommand.h
 * @brief Defines the EventsCommand interface that provides virtual methods for various event-related actions.
 * 
 * This file declares an abstract base class `EventsCommand` which serves as an interface 
 * for handling different events such as pandemics, natural disasters, load-shedding, 
 * festivals, and economic recessions. Each type of event includes various commands 
 * that can be implemented in concrete classes.
 */

#ifndef EVENTSCOMMAND_H
#define EVENTSCOMMAND_H

/**
 * @class EventsCommand
 * @brief Interface for handling city event commands.
 * 
 * The `EventsCommand` class provides an interface with various virtual methods that 
 * correspond to actions for different types of events, including pandemics, natural 
 * disasters, load-shedding, festivals, and recessions. Derived classes implement these methods.
 */
class EventsCommand {
public:
    /// Virtual destructor to ensure proper cleanup of derived classes.
    virtual ~EventsCommand() = default;

    // Pandemic-related commands

    /**
     * @brief Imposes a lockdown to prevent the spread of a pandemic.
     */
    virtual void imposeLockdown() = 0;

    /**
     * @brief Increases healthcare funding during a pandemic.
     */
    virtual void increaseHealthcareFunding() = 0;

    /**
     * @brief Distributes vaccines to citizens during a pandemic.
     */
    virtual void distributeVaccines() = 0;

    /**
     * @brief Quarantines citizens to control infection rates.
     */
    virtual void quarantineCitizens() = 0;

    /**
     * @brief Manages citizen satisfaction during pandemic restrictions.
     */
    virtual void manageCitizenSatisfaction() = 0;

    /**
     * @brief Tracks the infection rates of the pandemic over time.
     */
    virtual void trackInfectionRates() = 0;

    // Natural disaster-related commands

    /**
     * @brief Causes damage to buildings during a natural disaster.
     */
    virtual void damageBuildings() = 0;

    /**
     * @brief Evacuates citizens from disaster-affected areas.
     */
    virtual void evacuateCitizens() = 0;

    /**
     * @brief Repairs infrastructure that was damaged during a disaster.
     */
    virtual void repairInfrastructure() = 0;

    /**
     * @brief Blocks transport routes affected by the disaster.
     */
    virtual void blockTransportRoutes() = 0;

    /**
     * @brief Provides emergency services to disaster-affected citizens.
     */
    virtual void provideEmergencyServices() = 0;

    /**
     * @brief Manages the aftermath of the disaster and plans reconstruction.
     */
    virtual void manageAftermathReconstruction() = 0;

    // Loadshedding-related commands

    /**
     * @brief Cuts electricity supply to buildings during load-shedding.
     */
    virtual void cutElectricityToBuildings() = 0;

    /**
     * @brief Notifies citizens of planned power outages.
     */
    virtual void notifyCitizensOfOutages() = 0;

    /**
     * @brief Schedules load-shedding periods.
     */
    virtual void scheduleLoadshedding() = 0;

    /**
     * @brief Allocates energy resources during load-shedding events.
     */
    virtual void allocateEnergyResources() = 0;

    /**
     * @brief Handles complaints related to load-shedding and utility issues.
     */
    virtual void manageUtilityComplaints() = 0;

    // Festival-related commands

    /**
     * @brief Promotes a festival to citizens and tourists.
     */
    virtual void promoteFestival() = 0;

    /**
     * @brief Increases citizen happiness during festival events.
     */
    virtual void boostCitizenHappiness() = 0;

    /**
     * @brief Increases utility consumption during the festival.
     */
    virtual void increaseUtilityConsumption() = 0;

    /**
     * @brief Allocates city resources to support festival activities.
     */
    virtual void allocateResourcesForFestival() = 0;

    /**
     * @brief Manages traffic during the festival to ensure smooth flow.
     */
    virtual void manageTrafficDuringFestival() = 0;

    /**
     * @brief Assesses the economic impact of the festival on the city.
     */
    virtual void assessEconomicImpactOfFestival() = 0;

    // Recession-related commands

    /**
     * @brief Increases taxes during an economic recession to stabilize the budget.
     */
    virtual void raiseTaxes() = 0;

    /**
     * @brief Reduces public spending to manage financial crises.
     */
    virtual void cutPublicSpending() = 0;

    /**
     * @brief Manages citizen dissatisfaction during economic hardship.
     */
    virtual void manageCitizenDissatisfaction() = 0;

    /**
     * @brief Closes commercial buildings that are affected by the recession.
     */
    virtual void closeCommercialBuildings() = 0;

    /**
     * @brief Manages the increase in unemployment during a recession.
     */
    virtual void increaseUnemployment() = 0;

    /**
     * @brief Boosts relief programs to support citizens during a recession.
     */
    virtual void boostEconomicReliefPrograms() = 0;
};

#endif // EVENTSCOMMAND_H
