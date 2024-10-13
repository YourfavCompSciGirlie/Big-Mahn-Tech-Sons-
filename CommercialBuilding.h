/**
 * @file CommercialBuilding.h
 * @brief Declaration of the CommercialBuilding class.
 */

#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include "Building.h"

/**
 * @class CommercialBuilding
 * @brief Abstract base class for commercial buildings.
 */
class CommercialBuilding : public Building {
public:
    using Building::Building; ///< Inherit constructors.

    /**
     * @brief Reports the resource usage for commercial buildings.
     */
    void reportResourceUsage() const override;
};

#endif // COMMERCIALBUILDING_H
