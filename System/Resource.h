/**
 * @file Resource.h
 * @brief Declaration of the Resource class.
 */

#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>
#include "TaxManager.h"

/**
 * @class Resource
 * @brief Abstract base class for all types of resources.
 *
 * This class provides a base for different types of resources used in the simulation.
 */
class Resource: public TaxManager {
protected:
    std::string name; ///< The name of the resource.
    double amount; ///< The amount of the resource available.

public:
    /**
     * @brief Constructs a new Resource object.
     * 
     * @param name Name of the resource.
     * @param amount Initial amount of the resource.
     */
    Resource(const std::string& name, double amount);

    /**
     * @brief Destroys the Resource object.
     */
    virtual ~Resource() {}

    /**
     * @brief Gets the name of the resource.
     * 
     * @return std::string The resource's name.
     */
    std::string getName() const;

    /**
     * @brief Gets the amount of the resource.
     * 
     * @return double The amount of the resource.
     */
    double getAmount() const;

    /**
     * @brief Adds an amount to the resource.
     * 
     * @param amount The amount to be added.
     */
    void addAmount(double amount);

    /**
     * @brief Removes an amount from the resource.
     * 
     * @param amount The amount to be removed.
     */
    void removeAmount(double amount);

    /**
     * @brief Reports the current status of the resource.
     * 
     * This method should be overridden by derived classes to provide specific information.
     */
    virtual void reportStatus() const = 0;

    void visitBudget(Budget* budget);

};

#endif // RESOURCE_H
