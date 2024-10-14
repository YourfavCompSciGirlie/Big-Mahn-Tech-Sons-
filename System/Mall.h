/**
 * @file Mall.h
 * @brief Declaration of the Mall class.
 */

#ifndef MALL_H
#define MALL_H

#include "CommercialBuilding.h"

/**
 * @class Mall
 * @brief Represents a shopping mall in the simulation.
 */
class Mall : public CommercialBuilding {
public:
    using CommercialBuilding::CommercialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // MALL_H
