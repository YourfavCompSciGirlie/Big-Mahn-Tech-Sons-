#ifndef DEPARTMENTUTILITIES_H
#define DEPARTMENTUTILITIES_H

#include <iostream>
using namespace std;

/**
 * @class DepartmentUtilities
 * @brief Base class for managing various city utility departments like power, water, and waste management.
 */
class DepartmentUtilities {
private:
    string departmentName; /**< Name of the department (e.g., Power, Water, Waste Management). */
    double resourceUsage;  /**< The amount of resources used by the department. */
    double budget;         /**< The budget allocated to the department. */

public:
    /**
     * @brief Constructor for DepartmentUtilities.
     * @param name The name of the department.
     * @param budget The initial budget allocated to the department.
     */
    DepartmentUtilities(string name, double budget);

    /**
     * @brief Displays the information about the department.
     */
    void displayDepartmentInfo();

    /**
     * @brief Requests additional budget allocation from the government.
     */
    void requestBudget();

    /**
     * @brief Allocates resources such as energy or water to different sectors of the city.
     */
    void allocateResources();

    /**
     * @brief Tracks the department's resource usage across various sectors or functions.
     */
    void trackUsage();

    //+++++++++++++++++========== FOR THE COMMAND +++++++++++++++++++++++++++++++

        /**
     * @brief Initiates power load shedding for the department.
     */
    void initiateLoadshedding();

    /**
     * @brief Restores power or resources after load shedding.
     */
    void restorePower();

    /**
     * @brief Increases the resource usage of the department.
     */
    void increaseUsage();

    /**
     * @brief Reduces the resource usage of the department.
     */
    void reduceUsage();

    /**
     * @brief Repairs infrastructure related to the department.
     */
    void repairInfrastructure();
};

#endif // DEPARTMENTUTILITIES_H
