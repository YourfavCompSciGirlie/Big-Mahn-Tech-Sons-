/**
 * @file ResidentialBuildingCreator.h
 * @brief Declaration of the ResidentialBuildingCreator class.
 */

#ifndef RESIDENTIALBUILDINGCREATOR_H
#define RESIDENTIALBUILDINGCREATOR_H

#include "BuildingCreator.h"
#include "House.h"
#include "Apartment.h"
#include "Estate.h"

/**
 * @class ResidentialBuildingCreator
 * @brief Concrete creator for residential buildings.
 */
class ResidentialBuildingCreator : public BuildingCreator {
public:
    /**
     * @brief Creates a residential building of a specific type.
     * 
     * @param type Type of the residential building to create.
     * @return std::shared_ptr<Building> Pointer to the created residential building.
     * @throws std::invalid_argument If the building type is unknown.
     */
    std::shared_ptr<Building> createBuilding(const std::string& type) override;
};

#endif // RESIDENTIALBUILDINGCREATOR_H
