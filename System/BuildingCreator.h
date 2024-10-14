/**
 * @file BuildingCreator.h
 * @brief Declaration of the BuildingCreator interface.
 */

#ifndef BUILDINGCREATOR_H
#define BUILDINGCREATOR_H

#include <memory>
#include <string>
#include <stdexcept>
#include "Building.h"

/**
 * @class BuildingCreator
 * @brief Abstract factory interface for creating buildings.
 */
class BuildingCreator {
public:
    /**
     * @brief Creates a building of a specific type.
     * 
     * @param type Type of the building to create.
     * @return std::shared_ptr<Building> Pointer to the created building.
     * @throws std::invalid_argument If the building type is unknown.
     */
    virtual std::shared_ptr<Building> createBuilding(const std::string& type) = 0;

    /**
     * @brief Destroys the BuildingCreator object.
     */
    virtual ~BuildingCreator() = default;
};

#endif // BUILDINGCREATOR_H
