/**
 * @file House.h
 * @brief Declaration of the House class.
 */

#ifndef HOUSE_H
#define HOUSE_H

#include "ResidentialBuilding.h"

/**
 * @class House
 * @brief Represents a house in the simulation.
 */
class House : public ResidentialBuilding {
public:
    using ResidentialBuilding::ResidentialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // HOUSE_H
