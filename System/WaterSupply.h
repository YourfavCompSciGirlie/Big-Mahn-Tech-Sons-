/**
 * @file WaterSupply.h
 * @author Aundrea
 * @brief Header file for the WaterSupply class, responsible for managing water distribution and supply in the city.
 *  
 *  Design Pattern used : Chain of responsibility
 *  Handler : DepartmentUtilities
 *  ConcreteHandler1 : PowerSupply
 *  ConcreteHandler2 : waterSupply
 *  ConcreteHandler3 : WasteManagement
 */

#ifndef WATERSUPPLY_H
#define WATERSUPPLY_H

#include "DepartmentUtilities.h"

/**
 * @class WaterSupply
 * @brief Manages the water distribution and supply system for the city.
 * Inherits from the DepartmentUtilities class.
 */
class WaterSupply : public DepartmentUtilities {
private:
    double waterCapacity; /**< Total water capacity available for distribution. */

public:
    /**
     * @brief Constructor for WaterSupply.
     * @param name The name of the department.
     * @param budget The budget allocated to the water supply department.
     * @param capacity The initial water capacity available for the department.
     */
    WaterSupply(string name, double budget, double capacity);

    /**
     * @brief Distributes water to various sectors of the city based on demand.
     */
    void distributeWater();

    /**
     * @brief Calculates the current water usage based on consumption rates.
     * @return The amount of water used.
     */
    double calculateWaterUsage();

    /**
     * @brief Shuts down the water supply for water cut.
     */
    void waterShutDown();

    /**
     * @brief Refills the water supply to maintain adequate levels for the city.
     */
    void refillWater();

    /**
     * @brief Repairs damaged water infrastructure such as pipes or reservoirs.
     */
    void repairWaterInfrastructure();

    /**
     * @brief Increases the water storage capacity of the system.
     */
    void increaseStorage();

    /**
     * @brief Gets the current total water capacity.
     * @return The current water capacity available.
     */
    double getWaterCapacity();

    /**
     * @brief the handleRequest() function is the core method responsible for either processing 
     *          the request or passing it along the chain to the next handler. WaterSupply 
     *          checks if it can handle the request, if not, WaterSupply will pass it on
     *          to the next concreteHandler.
     */
    void handleRequest();
};

#endif  // WATERSUPPLY_H
