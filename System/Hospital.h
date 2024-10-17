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

    
    void healOccupents(); ///< Heal all the citizens in the building, then send them all home via the goHome command
};

#endif // HOSPITAL_H
