/**
 * @file LandmarkBuilding.h
 * @brief Declaration of the LandmarkBuilding class.
 */

#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

#include "Building.h"

/**
 * @class LandmarkBuilding
 * @brief Abstract base class for landmark buildings.
 */
class LandmarkBuilding : public Building {
public:
    using Building::Building; ///< Inherit constructors.

    /**
     * @brief Reports the resource usage for landmark buildings.
     */
    void reportResourceUsage() const override;
};

#endif // LANDMARKBUILDING_H
