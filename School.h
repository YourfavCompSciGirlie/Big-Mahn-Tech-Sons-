/**
 * @file School.h
 * @brief Declaration of the School class.
 */

#ifndef SCHOOL_H
#define SCHOOL_H

#include "CommercialBuilding.h"

/**
 * @class School
 * @brief Represents a school in the simulation.
 */
class School : public CommercialBuilding {
public:
    using CommercialBuilding::CommercialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // SCHOOL_H
