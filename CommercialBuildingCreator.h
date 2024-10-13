/**
 * @file CommercialBuildingCreator.h
 * @brief Declaration of the CommercialBuildingCreator class.
 */

#ifndef COMMERCIALBUILDINGCREATOR_H
#define COMMERCIALBUILDINGCREATOR_H

#include "BuildingCreator.h"
#include "Shop.h"
#include "Office.h"
#include "School.h"
#include "Hospital.h"
#include "Mall.h"

/**
 * @class CommercialBuildingCreator
 * @brief Concrete creator for commercial buildings.
 */
class CommercialBuildingCreator : public BuildingCreator {
public:
    /**
     * @brief Creates a commercial building of a specific type.
     * 
     * @param type Type of the commercial building to create.
     * @return std::shared_ptr<Building> Pointer to the created commercial building.
     * @throws std::invalid_argument If the building type is unknown.
     */
    std::shared_ptr<Building> createBuilding(const std::string& type) override;
};

#endif // COMMERCIALBUILDINGCREATOR_H
