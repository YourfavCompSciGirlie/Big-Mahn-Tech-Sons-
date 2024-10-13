/**
 * @file Apartment.h
 * @brief Declaration of the Apartment class.
 */

#ifndef APARTMENT_H
#define APARTMENT_H

#include "ResidentialBuilding.h"

/**
 * @class Apartment
 * @brief Represents an apartment building in the simulation.
 */
class Apartment : public ResidentialBuilding {
public:
    using ResidentialBuilding::ResidentialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // APARTMENT_H
