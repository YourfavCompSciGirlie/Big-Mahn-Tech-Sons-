/**
 * @file HousingManager.h
 * @brief Declaration of the HousingManager class.
 */

#ifndef HOUSINGMANAGER_H
#define HOUSINGMANAGER_H

#include "HousingDept.h" // Include the HousingDept class
#include "Resource.h" // Include resource classes

/**
 * @class HousingManager
 * @brief Manages housing operations and oversees the HousingDept.
 */
class HousingManager : public HousingDept {
public:
    /**
     * @brief Constructs a new HousingManager object.
     * 
     * @param resources Pointer to the resources available for building management.
     */
    HousingManager(Resource* resources);

    /**
     * @brief Destroys the HousingManager object.
     */
    ~HousingManager();

    /**
     * @brief Adds a building to the housing department and updates resources.
     * 
     * @param building Pointer to the building to be added.
     */
    void addBuilding(Building* building);

    /**
     * @brief Removes a building from the housing department and updates resources.
     * 
     * @param building Pointer to the building to be removed.
     */
    void removeBuilding(Building* building);

    /**
     * @brief Monitors housing statistics including financial aspects.
     */
    void monitorHousingStats() const;

    /**
     * @brief Reports the overall housing situation, including occupancy rates and resource usage.
     */
    void reportOverallHousingStatus() const;
};

#endif // HOUSINGMANAGER_H
