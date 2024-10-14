/**
 * @file Train.h
 * @brief Declaration of the Train class.
 */

#ifndef TRAIN_H
#define TRAIN_H

#include "ModeOfTrans.h"



/**
 * @class Train
 * @brief Represents train transport as a mode of transport.
 */
class Train : public ModeOfTrans{
public:
    /**
     * @brief Gets the name of the transport mode.
     * 
     * @return std::string The name "Train".
     */
    std::string getName() const override;

    /**
     * @brief Gets the cost of train transportation.
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
