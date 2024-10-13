/**
 * @file Material.h
 * @brief Declaration of the Material class.
 */

#ifndef MATERIAL_H
#define MATERIAL_H

#include "Resource.h"

/**
 * @class Material
 * @brief Represents material resource in the simulation.
 */
class Material : public Resource {
public:
    using Resource::Resource; ///< Inherit constructors.

    /**
     * @brief Reports the current status of the material resource.
     */
    void reportStatus() const override;
};

#endif // MATERIAL_H
