/** 
 * * @author u21824241_(add yours guys)
 */

#ifndef VISITHOUSING_H
#define VISITHOUSING_H

#include "TaxManager.h"

/**
 * @class visitHousing
 * @brief ConcreteVisitor class for housing taxation.
 */
class visitHousing : public TaxManager {
public:
    void visitBuilding(Building* building) override;
    void visitBudget(Budget* budget) override;
};

#endif // VISITHOUSING_H
