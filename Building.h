#ifndef BUILDING_H
#define BUILDING_H

#include <string>

class Node;

/**
 * @file Building.h
 * @brief Declaration of the Building class.
 */

/**
 * @class Building
 * @brief Represents a building in the simulation.
 *
 * Each building is located at a specific node in the road network.
 */
class Building {
private:
    std::string name; /**< Name of the building */
    Node* location; /**< Pointer to the node where the building is located */

public:
    /**
     * @brief Constructs a new Building object.
     * 
     * @param name Name of the building.
     * @param location Pointer to the node where the building is located.
     */
    Building(const std::string& name, Node* location);

    /**
     * @brief Destroys the Building object.
     */
    ~Building();

    /**
     * @brief Gets the name of the building.
     * 
     * @return std::string The building's name.
     */
    std::string getName() const;

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
};

#endif 
