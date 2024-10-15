
/**
 * @file Edge.h
 * @brief Declaration of the Edge class representing a road connecting two nodes.
 */
 
#ifndef EDGE_H
#define EDGE_H

#include "Node.h"

/**
 * @class Edge
 * @brief Represents an edge (road) in the road network graph.
 *
 * Connects two nodes and has an associated distance (weight).
 */
class Edge {
private:
    Node* from; /**< Starting node of the edge */
    Node* to; /**< Ending node of the edge */
    double distance; /**< Distance between the nodes in kilometers */

public:
    /**
     * @brief Constructs a new Edge object.
     * 
     * @param from Pointer to the starting node.
     * @param to Pointer to the ending node.
     * @param distance Distance between the nodes.
     */
    Edge(Node* from, Node* to, double distance);

    /**
     * @brief Destroys the Edge object.
     */
    ~Edge();

    /**
     * @brief Gets the starting node of the edge.
     * 
     * @return Node* Pointer to the starting node.
     */
    Node* getFrom() const;

    /**
     * @brief Gets the ending node of the edge.
     * 
     * @return Node* Pointer to the ending node.
     */
    Node* getTo() const;

    /**
     * @brief Gets the distance of the edge.
     * 
     * @return double The distance in kilometers.
     */
    double getDistance() const;
    double getTrafficFactor() const;
    void setTrafficFactor(double factor);
    /**
     * @brief Calculates the travel time considering both distance and traffic.
     * @return Travel time.
     */
    double getTravelTime() const;
};

#endif 
