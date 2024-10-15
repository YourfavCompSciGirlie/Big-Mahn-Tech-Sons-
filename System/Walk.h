/**
 * @file Walk.h
 * @brief Declaration of the Walk class.
 */

#ifndef WALK_H
#define WALK_H

#include "ModeOfTrans.h"



/**
 * @class Walk
 * @brief Represents walking as a mode of transport.
 */
class Walk : public ModeOfTrans{
public:
    /**
     * @brief Gets the name of the transport mode.
     * 
     * @return std::string The name "Walk".
     */
    std::string getName() const override;

    /**
     * @brief Gets the cost per kilometer of walking.
     * 
     * @return double The cost (0.0).
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
