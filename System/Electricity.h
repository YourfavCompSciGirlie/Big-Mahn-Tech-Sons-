/**
 * @file Electricity.h
 * @brief Declaration of the Electricity class.
 */

#ifndef ELECTRICITY_H
#define ELECTRICITY_H

#include "Resource.h"

/**
 * @class Electricity
 * @brief Represents electricity resource in the simulation.
 */
class Electricity : public Resource {
public:
    using Resource::Resource; ///< Inherit constructors.

    /**
     * @brief Reports the current status of the electricity resource.
     */
    void reportStatus() const override;
};

#endif // ELECTRICITY_H
