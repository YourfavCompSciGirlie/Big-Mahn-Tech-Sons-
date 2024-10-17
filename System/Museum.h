/**
 * @file Museum.h
 * @brief Declaration of the Museum class.
 */

#ifndef MUSEUM_H
#define MUSEUM_H

#include "LandmarkBuilding.h"

/**
 * @class Museum
 * @brief Represents a museum in the simulation.
 */
class Museum : public LandmarkBuilding {
public:
    using LandmarkBuilding::LandmarkBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // MUSEUM_H
