/**
 * @file PowerSupply.h
 * @author Aundrea
 * @brief Header file for the PowerSupply class, responsible for managing electricity generation and distribution in the city.
 */

#ifndef POWERSUPPLY_H
#define POWERSUPPLY_H

#include "DepartmentUtilities.h"

/**
 * @class PowerSupply
 * @brief Manages the electricity generation and distribution system for the city.
 * Inherits from the DepartmentUtilities class.
 */
class PowerSupply : public DepartmentUtilities {
private:
    double powerCapacity; /**< Total electricity capacity available for distribution. */

public:
    /**
     * @brief Constructor for PowerSupply.
     * @param name The name of the department.
     * @param budget The budget allocated to the power supply department.
     * @param capacity The initial power capacity available for the department.
     */
    PowerSupply(string name, double budget, double capacity);

    /**
     * @brief Generates electricity to meet the city's demand.
     */
    void generatePower();

    /**
     * @brief Distributes electricity across various sectors in the city.
     */
    void distributePower();

    /**
     * @brief Calculates the current power usage based on consumption rates.
     * @return The amount of electricity consumed.
     */
    double calculatePowerUsage();

    /**
     * @brief Shuts down power generation for maintenance or emergency purposes.
     */
    void powerShutDown();

    /**
     * @brief Increases the electricity generation capacity of the power plants.
     */
    void increasePowerCapacity();

    /**
     * @brief Repairs power infrastructure such as power lines and transformers.
     */
    void repairPowerInfrastructure();

    /**
     * @brief Gets the current total power generation capacity.
     * @return The current power generation capacity available.
     */
    double getPowerCapacity();
};

#endif  // POWERSUPPLY_H
