/** 
 * * @author u21824241_(add yours guys)
 */

#ifndef TAXMANAGER_H
#define TAXMANAGER_H

#include <map>
#include <vector>
#include <string>
#include "Citizen.h"
#include "visitHousing.h"
#include "Resource.h"
#include "CommercialBuilding.h"
#include "ResidentialBuilding.h"
#include "Budget.h"

/**
 * @class TaxManager
 * @brief Manages taxation policies and visits buildings and resources in the city.
 * 
 * The TaxManager is responsible for managing the taxation system in the city.
 * It collects taxes from citizens and businesses and distributes the city's budget to different departments.
 * The TaxManager also applies tax policies and interacts with buildings and resources using the Visitor pattern.
 */
class TaxManager {
private:
    std::map<std::string, float> taxRates;   /**< Map of tax rates (e.g., "IncomeTax", "PropertyTax", "SalesTax"). */
    float collectedTaxes;                    /**< Total taxes collected. */
    std::vector<Citizen*> citizenList;       /**< List of citizens for tax calculation. */
    std::vector<CommercialBuilding*> commercialBuildings; /**< List of commercial buildings for business tax calculation. */
    std::vector<ResidentialBuilding*> residentialBuildings; /**< List of residential buildings for citizen tax collection. */
    float governmentBudget;                  /**< City budget after tax collection. */

public:
    /**
     * @brief Constructor for TaxManager.
     */
    TaxManager();
    
    /**
     * @brief Sets the tax rate for a specific tax type.
     * @param type The type of tax (e.g., "IncomeTax", "PropertyTax").
     * @param rate The tax rate to be applied.
     */
    void setTaxRate(const std::string& type, float rate);
    
    /**
     * @brief Calculates the tax for a given citizen based on their budget.
     * @param citizen Pointer to the citizen object.
     * @return The calculated tax amount.
     */
    float calculateCitizenTax(Citizen* citizen);
    
    /**
     * @brief Calculates the tax for a commercial building.
     * @param building Pointer to the commercial building object.
     * @return The calculated business tax amount.
     */
    float calculateBusinessTax(CommercialBuilding* building);
    
    /**
     * @brief Collects taxes from all citizens and businesses in the city.
     */
    void collectTaxes();
    
    /**
     * @brief Distributes a portion of the city's budget to a specified department.
     * @param department The name of the department to allocate funds to.
     * @param allocation The amount of budget to be allocated.
     */
    void distributeBudget(const std::string& department, float allocation);
    
    /**
     * @brief Applies any changes to the tax policies.
     * 
     * This method can be used to update tax policies and rates during the simulation.
     */
    void applyTaxChanges();
    
    /**
     * @brief Gets the total amount of taxes collected.
     * @return The total taxes collected.
     */
    float getCollectedTaxes() const;
    
    /**
     * @brief Gets the current government budget.
     * @return The current government budget after tax collection and allocations.
     */
    float getGovernmentBudget() const;

    /**
     * @brief Sets the list of citizens in the city for tax calculation.
     * @param citizens A vector of pointers to the citizens.
     */
    void setCitizenList(const std::vector<Citizen*>& citizens);
    
    /**
     * @brief Sets the list of commercial buildings in the city.
     * @param businesses A vector of pointers to the commercial buildings.
     */
    void setCommercialBuildings(const std::vector<CommercialBuilding*>& businesses);
    
    /**
     * @brief Sets the list of residential buildings in the city.
     * @param buildings A vector of pointers to the residential buildings.
     */
    void setResidentialBuildings(const std::vector<ResidentialBuilding*>& buildings);

    // Visitor methods for visiting buildings and resources

    /**
     * @brief Visits a residential building to collect taxes from its residents.
     * @param residentialBuilding Pointer to the residential building to visit.
     */
    void visitResidentialBuilding(ResidentialBuilding* residentialBuilding);
    
    /**
     * @brief Visits a commercial building to collect business taxes.
     * @param commercialBuilding Pointer to the commercial building to visit.
     */
    void visitCommercialBuilding(CommercialBuilding* commercialBuilding);
    
    /**
     * @brief Visits the city's budget to allocate collected taxes.
     * @param budget Pointer to the budget resource to visit.
     */
    void visitBudget(Budget* budget);
};

#endif // TAXMANAGER_H
