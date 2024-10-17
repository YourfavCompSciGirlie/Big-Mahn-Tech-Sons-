#include "Building.h"

Building::Building(const std::string &name, int capacity, Node *location, DepartmentOfPR *PR)
{
   this->name = name;
   this->capacity = capacity;
   this->location = location;
   this->PR = PR;

}

void Building::notifyPR()
{
   if((getCurrentTenants()/capacity) > 0.95) { ///< if current building 90% full, best to add another
      this->PR->update(this);
   }
}

int Building::getCapacity() const
{
   return this->capacity;
}

void Building::addTenant(Citizen *tenant)
{
   this->tenants.push_back(tenant);
   notifyPR();
}

int Building::getCurrentTenants() const
{
   return this->tenants.size();
}

Node *Building::getLocation() const
{
   return this->location;
}

void Building::setLocation(Node *node)
{
   if(node) {
      this->location = node;
   }
}

void Building::damage(double percentage)
{
}
