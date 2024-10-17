/**
 * @file DepartmentOfTransportation.h
 * @brief Declaration of the DepartmentOfTransportation class.
 */

#ifndef DEPARTMENTOFTRANSPORTATION_H
#define DEPARTMENTOFTRANSPORTATION_H
 
#include <string>
#include "RoadNetWork.h"
#include "BuildingIterator.h"

class Citizen;

/**
 * @class DepartmentOfTransportation
 * @brief Manages transportation-related operations within the road network.
 *
 * Handles notifications about transportation problems and takes actions to fix them.
 */
class DepartmentOfTransportation {
private:
    RoadNetwork* roadNetwork; /**< Pointer to the road network */

public:
    /**
     * @brief Constructs a new DepartmentOfTransportation object.
     * 
     * @param roadNetwork Pointer to the road network.
     */
    DepartmentOfTransportation(RoadNetwork* roadNetwork);

    /**
     * @brief Destroys the DepartmentOfTransportation object.
     */
    ~DepartmentOfTransportation();

    /**
     * @brief Gets the road network managed by the department.
     * 
     * @return RoadNetwork* Pointer to the road network.
     */
    RoadNetwork* getRoadNetwork() const;

    /**
     * @brief Notifies the department of a transportation problem.
     * 
     * This function follows the Observer pattern, allowing the department to respond to issues such as road closures or potholes.
     * 
     * @param problemDescription Description of the problem.
     */
    void notifyProblem(const std::string& problemDescription);

    /**
     * @brief Fixes a reported transportation problem.
     * 
     * @param problemDescription Description of the problem to fix.
     */
    void fixProblem(const std::string& problemDescription);


   //------------------------EventCommand functions----------------------------------
     /**
     * @brief Blocks roads during a natural disaster.
     */
    void blockRoads();

    /**
     * @brief Clears roads after a disaster is over.
     */
    void clearRoads();

    /**
     * @brief Increases traffic during a city-wide event (e.g., a festival).
     */
    void increaseTraffic();

    /**
     * @brief Reduces traffic flow during events like pandemics or loadshedding.
     */
    void reduceTraffic();

    /**
     * @brief Gets an iterator for traversing buildings in the road network.
     * @return BuildingIterator object for building traversal.
     */
    BuildingIterator getBuildingIterator() const;
};

#endif 
