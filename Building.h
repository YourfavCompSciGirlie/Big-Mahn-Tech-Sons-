/**
 * @file Building.h
 * @brief Declaration of the Building class.
 */

#ifndef BUILDING_H
#define BUILDING_H

#include <string>
#include <vector>
#include "Element.h"
#include "TaxManager.h"

class Node; ///< Forward declaration of Node class
class Citizen; ///< Forward declaration of Citizen class

/**
 * @class Building
 * @brief Abstract base class for all types of buildings. Represents a building in the simulation.
 *
 * Each building is located at a specific node in the road network.
 */
class Building {
private:
    std::string name; ///< The name of the building.
    int capacity; ///< Maximum capacity of the building.
    std::vector<Citizen*> tenants; ///< Tenants residing in the building.
    Node* location; ///< Pointer to the node where the building is located.

public:
    /**
     * @brief Constructs a new Building object.
     * 
     * @param name Name of the building.
     * @param capacity Maximum number of tenants the building can accommodate.
     * @param location Pointer to the node where the building is located.
     */
    Building(const std::string& name, int capacity, Node* location);

    /**
     * @brief Destroys the Building object.
     */
    virtual ~Building() {}

    /**
     * @brief Gets the name of the building.
     * 
     * @return std::string The building's name.
     */
    std::string getName() const;

    /**
     * @brief Gets the capacity of the building.
     * 
     * @return int The capacity of the building.
     */
    int getCapacity() const;

    /**
     * @brief Adds a tenant to the building.
     * 
     * @param tenant The citizen to be added as a tenant.
     */
    void addTenant(Citizen* tenant);

    /**
     * @brief Gets the current number of tenants in the building.
     * 
     * @return int The current number of tenants.
     */
    int getCurrentTenants() const;

    /**
     * @brief Virtual method to get resource usage, to be overridden by derived classes.
     */
    virtual void reportResourceUsage() const = 0;

    /**
     * @brief Gets the location node of the building.
     * 
     * @return Node* Pointer to the location node.
     */
    Node* getLocation() const;

    /**
     * @brief Sets the location node of the building.
     * 
     * @param node Pointer to the new location node.
     */
    void setLocation(Node* node);

    /**
     * @brief Damages the building by a certain percentage.
     * 
     * @param percentage The percentage of damage applied to the building.
     */
    void damage(double percentage);

    /**
     * @brief Repairs the building after it has been damaged.
     */
    void repair();

    /**
     * @brief Simulates the closure of a building (e.g., during a recession).
     */
    void close();

    /**
     * @brief Reopens a building after it was closed during an event.
     */
    void reopen();

    /**
     * @brief Increases the resource consumption of the building (e.g., during a festival).
     */
    void increaseResourceConsumption();

    /**
     * @brief Decreases the resource consumption of the building, returning it to normal levels.
     */
    void decreaseResourceConsumption();

    // Note: The visit and accept methods are typically related to the Visitor design pattern.
    // virtual void visit(Building* building) = 0;
    /**
     * @brief Accepts a visitor (TaxManager).
     * @param visitor The visitor object.
     */
    virtual void accept(TaxManager* visitor) = 0;
};

#endif // BUILDING_H
