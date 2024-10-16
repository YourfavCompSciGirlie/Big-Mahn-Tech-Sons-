/**
 * @file WasteManagement.h
 * @author Aundrea
 * @brief Header file for the WasteManagement class, responsible for handling waste collection, disposal, and recycling in the city.
 *  
 *  Design Pattern used : Chain of responsibility
 *  Handler : DepartmentUtilities
 *  ConcreteHandler1 : PowerSupply
 *  ConcreteHandler2 : waterSupply
 *  ConcreteHandler3 : WasteManagement
 */

#ifndef WASTEMANAGEMENT_H
#define WASTEMANAGEMENT_H

#include "DepartmentUtilities.h"

/**
 * @class WasteManagement
 * @brief Manages the waste collection, disposal, and recycling systems for the city.
 * Inherits from the DepartmentUtilities class.
 */
class WasteManagement : public DepartmentUtilities {
private:
    double wasteCapacity; /**< Total capacity for handling waste in the city. */

public:
    /**
     * @brief Constructor for WasteManagement.
     * @param name The name of the department.
     * @param budget The budget allocated to the waste management department.
     * @param capacity The initial waste handling capacity available for the department.
     */
    WasteManagement(string name, double budget, double capacity);

    /**
     * @brief Collects waste from various parts of the city.
     */
    void collectWaste();

    /**
     * @brief Disposes of waste in landfills or dump locations.
     */
    void disposeWaste();

    /**
     * @brief Recycles materials that can be reused, reducing landfill usage.
     */
    void recycleMaterials();

    /**
     * @brief Calculates the current amount of waste being processed.
     * @return The amount of waste being processed.
     */
    double calculateWasteProcessing();

    /**
     * @brief Expands the waste handling capacity to accommodate city growth.
     */
    void expandWasteCapacity();

    /**
     * @brief Repairs waste management infrastructure, including garbage trucks, collection stations, and recycling plants.
     */
    void repairWasteInfrastructure();

    /**
     * @brief Gets the current total waste handling capacity.
     * @return The current waste handling capacity available.
     */
    double getWasteCapacity();

    /**
     * @brief the handleRequest() function is the core method responsible for either processing 
     *          the request or passing it along the chain to the next handler. WasteManagement 
     *          checks if it can handle the request, if not, WasteManagement will pass it on
     *          to the next concreteHandler.
     */
    void handleRequest();
};

#endif  // WASTEMANAGEMENT_H
