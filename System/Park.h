/**
 * @file Park.h
 * @brief Declaration of the Park class.
 */

#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"

/**
 * @class Park
 * @brief Represents a park in the simulation.
 */
class Park : public LandmarkBuilding {
public:
    using LandmarkBuilding::LandmarkBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // PARK_H
