/**
 * @file ResidentialBuilding.h
 * @brief Declaration of the ResidentialBuilding class.
 */

#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include "Building.h"
#include "TaxManager.h"

/**
 * @class ResidentialBuilding
 * @brief Abstract base class for residential buildings.
 */
class ResidentialBuilding : public Building {
public:
    using Building::Building; ///< Inherit constructors from Building.

    /**
     * @brief Reports the resource usage for residential buildings.
     */
    void reportResourceUsage() const override;
    
    /**
     * @brief Accepts a visitor (TaxManager) to collect taxes from citizens.
     * @param visitor The TaxManager visitor object.
     */
    void accept(TaxManager* visitor) override;
};

#endif // RESIDENTIALBUILDING_H
