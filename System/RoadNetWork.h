/**
 * @file RoadNetwork.h
 * @brief Declaration of the RoadNetwork class representing the road network graph.
 */

#ifndef ROADNETWORK_H
#define ROADNETWORK_H

#include <vector>
#include <string>
#include "BuildingIterator.h"

class Node;
class Edge;
class Building;
class Citizen;

 

/**
 * @class RoadNetwork
 * @brief Represents the road network as a graph.
 *
 * Manages nodes, edges, buildings, and citizens within the road network.
 */
class RoadNetwork {
private:
    std::vector<Node*> nodes; /**< All nodes in the road network */
    std::vector<Edge*> edges; /**< All edges (roads) in the road network */
    std::vector<Building*> buildings; /**< All buildings in the road network */
    std::vector<Citizen*> citizens; /**< All citizens in the road network */

public:
    /**
     * @brief Constructs a new RoadNetwork object.
     */
    RoadNetwork();

    /**
     * @brief Destroys the RoadNetwork object.
     */
    ~RoadNetwork();

    /**
     * @brief Adds a node to the road network.
     * 
     * @param node Pointer to the node to add.
     */
    void addNode(Node* node);

    /**
     * @brief Retrieves a node by its ID.
     * 
     * @param id The ID of the node.
     * @return Node* Pointer to the node if found, nullptr otherwise.
     */
    Node* getNodeById(int id) const;

    /**
     * @brief Gets all nodes in the road network.
     * 
     * @return const std::vector<Node*>& Constant reference to the vector of nodes.
     */
    const std::vector<Node*>& getNodes() const;

    /**
     * @brief Adds an edge (road) to the road network.
     * 
     * @param edge Pointer to the edge to add.
     */
    void addEdge(Edge* edge);

    /**
     * @brief Gets all edges in the road network.
     * 
     * @return const std::vector<Edge*>& Constant reference to the vector of edges.
     */
    const std::vector<Edge*>& getEdges() const;

    /**
     * @brief Adds a building to the road network.
     * 
     * @param building Pointer to the building to add.
     */
    void addBuilding(Building* building);

    /**
     * @brief Gets all buildings in the road network.
     * 
     * @return const std::vector<Building*>& Constant reference to the vector of buildings.
     */
    const std::vector<Building*>& getBuildings() const;

    /**
     * @brief Adds a citizen to the road network.
     * 
     * @param citizen Pointer to the citizen to add.
     */
    void addCitizen(Citizen* citizen);

    /**
     * @brief Gets all citizens in the road network.
     * 
     * @return const std::vector<Citizen*>& Constant reference to the vector of citizens.
     */
    const std::vector<Citizen*>& getCitizens() const;

    /**
     * @brief Finds a path between two nodes using a pathfinding algorithm.
     * 
     * @param start Pointer to the start node.
     * @param end Pointer to the end node.
     * @return std::vector<Node*> Vector of nodes representing the path.
     */
    std::vector<Node*> findPath(Node* start, Node* end) const;

    /**
     * @brief Finds the shortest path between two nodes.
     * @param network Pointer to the road network.
     * @param start Pointer to the starting node.
     * @param end Pointer to the ending node.
     * @return Vector of nodes representing the shortest path.
     */
    std::vector<Node*> findShortestPath(const RoadNetwork* network, Node* start, Node* end);

    /**
     * @brief Creates an iterator for the buildings in the road network.
     * @return BuildingIterator for the buildings.
     */
    BuildingIterator createBuildingIterator() const;

    /**
     * @brief Finds a building by its name.
     * @param name Name of the building.
     * @return Pointer to the building if found, or nullptr otherwise.
     */
    Building* findBuildingByName(const std::string& name) const;
};

#endif 
