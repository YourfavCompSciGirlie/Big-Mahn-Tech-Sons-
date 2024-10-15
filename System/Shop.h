/**
 * @file Shop.h
 * @brief Declaration of the Shop class.
 */

#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"

/**
 * @class Shop
 * @brief Represents a shop in the simulation.
 */
class Shop : public CommercialBuilding {
public:
    using CommercialBuilding::CommercialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // SHOP_H
