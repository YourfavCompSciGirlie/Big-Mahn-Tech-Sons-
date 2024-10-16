/**
 * @file Node.h
 * @brief Declaration of the Node class representing a node in the road network graph.
 */

#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>
#include "Edge.h"

class Edge;
class Building;

/**
 * @class Node
 * @brief Represents a node (e.g., intersection) in the road network graph.
 *
 * Each node can have multiple edges (roads) and may contain a building.
 */
class Node {
private:
    int id; /**< Unique identifier for the node */
    std::string name; /**< Name of the node */
    std::vector<Edge*> edges; /**< Adjacent edges (roads) */
    Building* building; /**< Building located at this node, if any */
    std::string  type;

public:
    /**
     * @brief Constructs a new Node object.
     * 
     * @param building Reference to building at that node
     * @param id Unique identifier for the node.
     * @param name Name of the node.
     * @param type Type of node it is. (Residential, Commercial, School, Airport etc.)
     */
    Node(Building* building, int id, const std::string& name, std::string type);

    /**
     * @brief Destroys the Node object.
     */
    ~Node();

    /**
     * @brief Gets the ID of the node.
     * 
     * @return int The node's unique identifier.
     */
    int getId() const;

    /**
     * @brief Gets the name of the node.
     * 
     * @return std::string The name of the node.
     */
    std::string getName() const;

    /**
     * @brief Adds an edge to the node.
     * 
     * @param edge Pointer to the edge to add.
     */
    void addEdge(Edge* edge);

    /**
     * @brief Gets all adjacent edges of the node.
     * 
     * @return const std::vector<Edge*>& Constant reference to the vector of adjacent edges.
     */
    const std::vector<Edge*>& getEdges() const;

    /**
     * @brief Gets the building located at this node.
     * 
     * @return Building* Pointer to the building, or nullptr if none.
     */
    Building* getBuilding() const;

    /**
     * @brief Sets the building at this node.
     * @param building Pointer to the building.
     */
    void setBuilding(Building* building);

    /**
     * @brief Finds the edge that connects this node to a destination node.
     * @param destination Pointer to the destination node.
     * @return Pointer to the edge if found, or nullptr otherwise.
     */
    Edge* getEdgeTo(Node* destination) const;
};

#endif
