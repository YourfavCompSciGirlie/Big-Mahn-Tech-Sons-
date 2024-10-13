#ifndef MODEOFTRANSPORT_H
#define MODEOFTRANSPORT_H

#include <string>

/**
 * @file ModeOfTrans.h
 * @brief Declaration of the ModeOfTrans abstract class representing transport modes.
 */

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

};

#endif 
