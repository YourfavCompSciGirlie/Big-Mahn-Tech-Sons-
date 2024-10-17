/**
 * @file Water.h
 * @brief Declaration of the Water class.
 */

#ifndef WATER_H
#define WATER_H

#include "Resource.h"

/**
 * @class Water
 * @brief Represents water resource in the simulation.
 */
class Water : public Resource {
public:
    using Resource::Resource; ///< Inherit constructors.

    /**
     * @brief Reports the current status of the water resource.
     */
    void reportStatus() const override;
};

#endif // WATER_H
