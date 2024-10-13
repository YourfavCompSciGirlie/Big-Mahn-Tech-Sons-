/**
 * @file HousingDept.h
 * @brief Declaration of the HousingDept class.
 */

#ifndef HOUSINGDEPT_H
#define HOUSINGDEPT_H

#include <string>
#include <vector>
#include "Building.h" // Include the Building class
#include "Resource.h" // Include resource classes

/**
 * @class HousingDept
 * @brief Represents the housing department responsible for managing housing-related activities.
 */
class HousingDept {
private:
    std::vector<Building*> buildings; ///< List of buildings managed by the housing department.
    Resource* resources; ///< Pointer to the resources available for building management.

public:
    /**
     * @brief Constructs a new HousingDept object.
     * 
     * @param resources Pointer to the resources available for building management.
     */
    HousingDept(Resource* resources);

    /**
     * @brief Destroys the HousingDept object.
     */
    ~HousingDept();

    /**
     * @brief Adds a building to the housing department.
     * 
     * @param building Pointer to the building to be added.
     */
    void addBuilding(Building* building);

    /**
     * @brief Removes a building from the housing department.
     * 
     * @param building Pointer to the building to be removed.
     */
    void removeBuilding(Building* building);

    /**
     * @brief Reports the status of all buildings managed by the department.
     */
    void reportBuildingStatus() const;

    /**
     * @brief Monitors housing statistics (e.g., occupancy, capacity).
     */
    void monitorHousingStats() const;
};

#endif // HOUSINGDEPT_H
