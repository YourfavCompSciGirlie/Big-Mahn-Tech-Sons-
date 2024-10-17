#include "Child.h"
#include "Adult.h"

void ChildState::handle(Citizen *citizen)
{
   if (citizen->getAge() > 18 && citizen->getAge() < 65) {
      citizen->setState(new AdultState());
   }
}

std::string ChildState::getStateName() const
{
   return "Child";
}