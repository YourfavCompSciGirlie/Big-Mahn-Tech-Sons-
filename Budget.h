/**
 * @file Budget.h
 * @brief Declaration of the Budget class.
 */

#ifndef BUDGET_H
#define BUDGET_H

#include "Resource.h"
#include "Element.h"
#include "TaxManager.h"

/**
 * @class Budget
 * @brief Represents budget resource in the simulation.
 */
class Budget : public Resource, public Element {
private:
    float totalBudget; /** Total budget amount */
public:
    using Resource::Resource; ///< Inherit constructors.

    /**
     * @brief Reports the current status of the budget resource.
     */
    void reportStatus() const override;

    // a few functions needed by the department of finance and the Tax Mananger 
    Budget(float initialBudget);
    ~Budget();

    float getTotalBudget() const;
    
    void setTotalBudget(float budget);

    /**
     * @brief Accepts a visitor (TaxManager).
     * @param visitor The visitor object.
     */
    void accept(TaxManager* visitor) override;
};

#endif // BUDGET_H
