#ifndef CITIZEN_H
#define CITIZEN_H

#include <string>
#include "ModeOfTrans.h"
#include "cStates.h"

class Building;
class RoadNetWork;

/**
 * @file Citizen.h
 * @author u23539764_(add yours guys)
 * @brief Declaration of the Citizen class representing a citizen in the simulation.
 */

/**
 * @class Citizen
 * @brief Represents a citizen in the life simulation game.
 *
 * A Citizen can travel between buildings using various modes of transport.
 * The Citizen's behavior changes based on their state (Child, Adult, Pensioner).
 */
class Citizen {
private:
    std::string name; /**< Name of the citizen */
    ModeOfTrans* modeOfTransport; /**< Current mode of transport */
    Building* currentLocation; /**< Current building location */
    CitizenState* state; /**< Current state of the citizen */
    int age; /**< Age of the citizen */
    double budget; /**< Budget of the citizen */
    double health;/**<Health of the citizen */
    double happiness; /**< Happiness of the citizen */

public:
    /**
     * @brief Constructs a new Citizen object.
     * 
     * @param nam Name of the citizen.
     * @param age Age of the citizen.
     * @param health  Health of the citizen
     *  @param happiness Happiness of the citizen
     * @param budget Initial budget of the citizen.
     * @param curr Pointer to the current state of the citizen.
     * @param mode Pointer to the current mode of transport.
     * @param location Pointer to the current building location.
     */
    Citizen(const std::string& nam, int age,int health ,double happiness , double budget, CitizenState* curr, ModeOfTrans* mode, Building* location);

    /**
     * @brief Destroys the Citizen object.
     */
    ~Citizen(); 

    /**
     * @brief Gets the name of the citizen.
     * 
     * @return std::string The name of the citizen.
     */
    std::string getName() const;

    /**
     * @brief Gets the budget of the citizen.
     * 
     * @return double The current budget.
     */
    double getBudget() const;

    /**
     * @brief Adds income to the citizen's budget.
     * 
     * @param amount The amount to add to the budget.
     */
    void work(double amount);

    /**
     * @brief Spends an amount from the citizen's budget.
     * 
     * @param amount The amount to spend.
     * @return true If the spend was successful.
     * @return false If there was insufficient budget.
     */
    bool Spend(double amount);


    /**
     * @brief Decreases the health of citizens by a certain percentage.
     * @param percentage The percentage by which the health is decreased.
     */
    void decreaseHealth(double percentage);

    /**
     * @brief Increases the health of citizens by a certain percentage.
     * @param percentage The percentage by which the health is increased.
     */
    void increaseHealth(double percentage);

    /**
     * @brief Lowers the satisfaction of citizens by a certain amount.
     * @param amount The amount by which satisfaction decreases.
     */
    void decreaseSatisfaction(double amount);

    /**
     * @brief Increases the satisfaction of citizens by a certain amount.
     * @param amount The amount by which satisfaction increases.
     */
    void increaseSatisfaction(double amount);

    /**
     * @brief Simulates the evacuation of citizens during a natural disaster or emergency.
     */
    void evacuate();

    /**
     * @brief Simulates the return of citizens to the city after an event.
     */
    void returnToCity();

    /**
     * @brief Simulates citizens becoming unemployed during an economic recession.
     */
    void becomeUnemployed();

    /**
     * @brief Simulates citizens finding new jobs after a recession or job creation event.
     */
    void getNewJob();






    /**
     * @brief Gets the name of the citizen's current state.
     * 
     * @return std::string The state name.
     */
    std::string getStateName() const;

    /**
     * @brief Sets the citizen's state.
     * 
     * @param state Pointer to the new state.
     */
    void setState(CitizenState* state);

    /**
     * @brief Updates the citizen's state based on age.
     * 
     * @param age The new age of the citizen.
     */
    void updateState(int age);

    /**
     * @brief Gets the current mode of transport.
     * 
     * @return ModeOfTrans* Pointer to the current mode of transport.
     */
    ModeOfTrans* getModeOfTransport() const;

    /**
     * @brief Sets the citizen's mode of transport.
     * 
     * @param mode Pointer to the new mode of transport.
     */
    void setModeOfTransport(ModeOfTrans* mode);

    /**
     * @brief Gets the current building location.
     * 
     * @return Building* Pointer to the current building.
     */
    Building* getCurrentLocation() const;

    /**
     * @brief Sets the citizen's current building location.
     * 
     * @param location Pointer to the new building.
     */
    void setCurrentLocation(Building* location);

    /**
     * @brief Travels to another building.
     * 
     * @param destination Pointer to the destination building.
     */
    void travelTo(Building* destination);

    /**
     * @brief Travels to another building using a specific strategy.
     * 
     * @param roadNetwork Pointer to the road network.
     */
    void travelWithStrategy(RoadNetWork* roadNetwork);
};

#endif
