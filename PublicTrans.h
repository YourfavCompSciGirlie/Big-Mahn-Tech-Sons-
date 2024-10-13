/**
 * @file PublicTrans.h
 * @brief Declaration of the PublicTransportaion class.
 */
#ifndef PUBLICTRANS_H
#define PUBLICTRANS_H

#include "ModeOfTrans.h"



/**
 * @class PublicTrans
 * @brief Represents public transportation as a mode of transport.
 */
class PublicTrans : public ModeOfTrans{
public:
    /**
     * @brief Gets the name of the transport mode.
     * 
     * @return std::string The name "Public Transport".
     */
    std::string getName() const override;

    /**
     * @brief Gets the cost  of public transportation.
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
