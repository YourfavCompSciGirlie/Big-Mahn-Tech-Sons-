#include "DeptPR.h"
#include "DeptOfFinance.h"
#include "DepartmentUtilities.h"
#include "HousingDept.h"

DepartmentOfPR::DepartmentOfPR(HousingDept *housingDept, DepartmentUtilities *utilitiesDept, DeptOfFinance *financeDept)
{
   this->housing = housingDept; ///< access to the housing department/
   this->utilities = utilitiesDept; ///< access to the utilities department
   this->finance = financeDept; ///< access to the finance department

}

void DepartmentOfPR::update(Building* building)
{
  notifyHousingToBuild();
}

void DepartmentOfPR::update(Citizen* citizen)
{
   notifyTaxman();
}


void DepartmentOfPR::notifyHousingToBuild()
{
   this->housing->addBuilding(NULL); ///< TODO
}

void DepartmentOfPR::notifyHousingToRemove(Building *building)
{
   this->housing->removeBuilding(building);
}

void DepartmentOfPR::notifyUtilities()
{
   this->utilities->allocateResources();
}

void DepartmentOfPR::notifyTaxman()
{
   if(true ) { /*condition to check if economy can afford to lower taxes */
      this->finance->decreaseTaxes();
   } else {
      return;
   }
}
