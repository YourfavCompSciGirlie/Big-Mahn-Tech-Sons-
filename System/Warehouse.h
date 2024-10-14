/**
 * @file Warehouse.h
 * @brief Declaration of the Warehouse class.
 */

#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "IndustrialBuilding.h"

/**
 * @class Warehouse
 * @brief Represents a warehouse in the simulation.
 */
class Warehouse : public IndustrialBuilding {
public:
    using IndustrialBuilding::IndustrialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // WAREHOUSE_H
