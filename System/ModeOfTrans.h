/**
 * @file ModeOfTrans.h
 * @brief Declaration of the ModeOfTrans abstract class representing transport modes.
 */

#ifndef MODEOFTRANSPORT_H
#define MODEOFTRANSPORT_H

#include <string>
#include <vector>
class Citizen;
class Node;
using namespace std;
 
/**
 * @class ModeOfTrans
 * @brief Abstract base class for different modes of transport.
 *
 * Defines the interface for various transport modes such as Walk, Public Transport, Air Transport, and Train.
 */
class ModeOfTrans{
public:
    /**
     * @brief Virtual destructor.
     */
    virtual ~ModeOfTrans() {}
    
    /**
     * @brief Gets the name of the transport mode.
     * 
     * @return std::string The name of the transport mode.
     */
    virtual std::string getName() const = 0;
    
    /**
     * @brief Gets the cost of the transport mode.
     * 
     * @return double The cost 
     */
    virtual double getCost() const = 0;

    /**
     * @brief Executes the mean of the transport i.e)drives
     * 
     * @return void
     */
    virtual void execute(Citizen* citizen, vector<Node*> node ) const = 0;
    /**
     * @brief Static method for selecting a transportation mode based on the distance to travel.
     * @param distance Distance between nodes in kilometers.
     * @return Pointer to the selected ModeOfTrans object.
     */
    static ModeOfTrans* selectModeByDistance(double distance);
    
};

#endif 
