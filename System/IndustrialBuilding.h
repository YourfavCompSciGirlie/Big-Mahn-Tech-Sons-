/**
 * @file IndustrialBuilding.h
 * @brief Declaration of the IndustrialBuilding class.
 */

#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

#include "Building.h"

/**
 * @class IndustrialBuilding
 * @brief Abstract base class for industrial buildings.
 */
class IndustrialBuilding : public Building {
public:
    using Building::Building; ///< Inherit constructors.

    /**
     * @brief Reports the resource usage for industrial buildings.
     */
    void reportResourceUsage() const override;
};

#endif // INDUSTRIALBUILDING_H
