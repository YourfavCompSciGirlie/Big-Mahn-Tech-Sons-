/**
 * @file Budget.h
 * @brief Declaration of the Budget class.
 */

#ifndef BUDGET_H
#define BUDGET_H

#include "Resource.h"

/**
 * @class Budget
 * @brief Represents budget resource in the simulation.
 */
class Budget : public Resource {
public:
    using Resource::Resource; ///< Inherit constructors.

    /**
     * @brief Reports the current status of the budget resource.
     */
    void reportStatus() const override;
};

#endif // BUDGET_H
