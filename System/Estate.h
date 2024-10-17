/**
 * @file Estate.h
 * @brief Declaration of the Estate class.
 */

#ifndef ESTATE_H
#define ESTATE_H

#include "ResidentialBuilding.h"

/**
 * @class Estate
 * @brief Represents an estate in the simulation.
 */
class Estate : public ResidentialBuilding {
public:
    using ResidentialBuilding::ResidentialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // ESTATE_H
