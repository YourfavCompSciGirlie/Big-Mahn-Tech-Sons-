/**
 * @file ResidentialBuilding.h
 * @brief Declaration of the ResidentialBuilding class.
 */

#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include "Building.h"

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
};

#endif // RESIDENTIALBUILDING_H
