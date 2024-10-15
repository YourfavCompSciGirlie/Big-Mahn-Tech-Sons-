/** 
 * * @author u21824241_(add yours guys)
 */
#ifndef DEPTOFFINANCE_H
#define DEPTOFFINANCE_H

#include <vector>
#include "Element.h"
#include "TaxManager.h"

/**
 * @class DeptOfFinance
 * @brief Client class that interacts with different tax policies.
 */
class DeptOfFinance {
private:
    std::vector<Element*> elements; /**< List of elements in the city */

public:
    DeptOfFinance();

    /**
     * @brief Adds an element to the list.
     * 
     * @param element The element to add.
     */
    void addElement(Element* element);

    /**
     * @brief Applies tax policies by accepting a visitor.
     * 
     * @param visitor The visitor (TaxManager) that applies tax policies.
     */
    void applyTaxes(TaxManager* visitor);

    /**
     * @brief Increases taxes by a certain percentage.
     * @param percentage The percentage by which taxes are increased.
     */
    void increaseTaxes(double percentage);

    /**
     * @brief Decreases taxes to alleviate financial pressure.
     */
    void decreaseTaxes();

    /**
     * @brief Allocates budget to a specific department.
     * @param department The name of the department.
     * @param amount The amount to be allocated.
     */
    void allocateBudget(const std::string& department, double amount);

    /**
     * @brief Cuts funding for a specific department.
     * @param department The name of the department.
     */
    void cutFunding(const std::string& department);

    /**
     * @brief Assesses the economic impact of an event on the city's finances.
     */
    void assessEconomicImpact();
};

#endif // DEPTOFFINANCE_H
