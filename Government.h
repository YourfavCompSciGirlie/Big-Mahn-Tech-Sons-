#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "Dept.Transportation.h"
#include <string>
#include <vector>

class Node;

/**
 * @file Government.h
 * @brief Declaration of the Government class acting as the facade.
 */

/**
 * @class Government
 * @brief Acts as the Government facade, providing simplified access to various departments.
 *
 * Currently focuses on the Department of Transportation.
 */
class Government {
private:
    DepartmentOfTransportation* deptOfTransport; /**< Pointer to the Department of Transportation */

public:
    /**
     * @brief Constructs a new Government object.
     */
    Government();

    /**
     * @brief Destroys the Government object.
     */
    ~Government();

    /**
     * @brief Gets the Department of Transportation.
     * 
     * @return DepartmentOfTransportation* Pointer to the Department of Transportation.
     */
    DepartmentOfTransportation* getDepartmentOfTransportation() const;


    //WHERE CAN I PLACE THE BELOW GUYS
    // /**
    //  * @brief Adds a building to the road network.
    //  * 
    //  * @param name Name of the building.
    //  * @param location Pointer to the node where the building is located.
    //  */
    // void addBuilding(const std::string& name, Node* location);

    // /**
    //  * @brief Adds a citizen to the road network.
    //  * 
    //  * @param name Name of the citizen.
    //  * @param location Pointer to the building where the citizen is located.
    //  */
    // void addCitizen(const std::string& name, Building* location);

    // /**
    //  * @brief Adds a road (edge) between two nodes.
    //  * 
    //  * @param from Pointer to the starting node.
    //  * @param to Pointer to the ending node.
    //  * @param distance Distance between the nodes.
    //  */
    // void addRoad(Node* from, Node* to, double distance);

    // /**
    //  * @brief Displays the path taken by a citizen.
    //  * 
    //  * @param path Vector of nodes representing the path.
    //  */
    // void displayPath(const std::vector<Node*>& path);
};

#endif 
