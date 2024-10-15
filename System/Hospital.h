/**
 * @file Hospital.h
 * @brief Declaration of the Hospital class.
 */

#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "CommercialBuilding.h"

/**
 * @class Hospital
 * @brief Represents a hospital in the simulation.
 */
class Hospital : public CommercialBuilding {
public:
    using CommercialBuilding::CommercialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // HOSPITAL_H
