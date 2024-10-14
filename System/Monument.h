/**
 * @file Monument.h
 * @brief Declaration of the Monument class.
 */

#ifndef MONUMENT_H
#define MONUMENT_H

#include "LandmarkBuilding.h"

/**
 * @class Library
 * @brief Represents a Monument in the simulation.
 */
class Monument : public LandmarkBuilding {
public:
    using LandmarkBuilding::LandmarkBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // MONUMENT_H
