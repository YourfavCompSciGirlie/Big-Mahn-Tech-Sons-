/**
 * @file LandmarkBuildingCreator.h
 * @brief Declaration of the LandmarkBuildingCreator class.
 */

#ifndef LANDMARKBUILDINGCREATOR_H
#define LANDMARKBUILDINGCREATOR_H

#include "BuildingCreator.h"
#include "Park.h"
#include "Monument.h"
#include "Museum.h"

/**
 * @class LandmarkBuildingCreator
 * @brief Concrete creator for landmark buildings.
 */
class LandmarkBuildingCreator : public BuildingCreator {
public:
    /**
     * @brief Creates a landmark building of a specific type.
     * 
     * @param type Type of the landmark building to create.
     * @return std::shared_ptr<Building> Pointer to the created landmark building.
     * @throws std::invalid_argument If the building type is unknown.
     */
    std::shared_ptr<Building> createBuilding(const std::string& type) override;
};

#endif // LANDMARKBUILDINGCREATOR_H
