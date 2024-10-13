/**
 * @file Office.h
 * @brief Declaration of the Office class.
 */

#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"

/**
 * @class Office
 * @brief Represents an office building in the simulation.
 */
class Office : public CommercialBuilding {
public:
    using CommercialBuilding::CommercialBuilding; ///< Inherit constructors.

    void reportResourceUsage() const override;
};

#endif // OFFICE_H
