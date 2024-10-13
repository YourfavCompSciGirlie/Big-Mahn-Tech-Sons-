/**
 * @file AirTrans.h
 * @brief Declaration of the AirTrans class.
 */

#ifndef AIRTRANS_H
#define AIRTRANS_H

#include "ModeOfTrans.h"



/**
 * @class AirTrans
 * @brief Represents air transport as a mode of transport.
 */
class AirTrans : public ModeOfTrans{
public:
    /**
     * @brief Gets the name of the transport mode.
     * 
     * @return std::string The name "Air Transport".
     */
    std::string getName() const override;

    /**
     * @brief Gets the cost per kilometer of air transportation.
     * 
     * @return double The cost.
     */
    double getCost() const override;

    
    /**
     * @brief Executes the mean of transport
     * 
     * @return  void
     */
    void execute() const override;


};

#endif 
