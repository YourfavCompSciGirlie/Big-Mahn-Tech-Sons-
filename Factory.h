/**
 * @file Factory.h
 * @brief Declaration of the Factory class.
 */

#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"

/**
 * @class Factory
 * @brief Represents a factory in the simulation.
 */
class Factory : public IndustrialBuilding {
public:
    using IndustrialBuilding::IndustrialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // FACTORY_H
