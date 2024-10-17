/**
 * @file IndustrialBuildingCreator.h
 * @brief Declaration of the IndustrialBuildingCreator class.
 */

#ifndef INDUSTRIALBUILDINGCREATOR_H
#define INDUSTRIALBUILDINGCREATOR_H

#include "BuildingCreator.h"
#include "Factory.h"
#include "Warehouse.h"
#include "Plant.h"

/**
 * @class IndustrialBuildingCreator
 * @brief Concrete creator for industrial buildings.
 */
class IndustrialBuildingCreator : public BuildingCreator {
public:
    /**
     * @brief Creates an industrial building of a specific type.
     * 
     * @param type Type of the industrial building to create.
     * @return std::shared_ptr<Building> Pointer to the created industrial building.
     * @throws std::invalid_argument If the building type is unknown.
     */
    std::shared_ptr<Building> createBuilding(const std::string& type) override;
};

#endif // INDUSTRIALBUILDINGCREATOR_H
