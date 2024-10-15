// this is an iterator class to iterate through the buildings 

#ifndef BUILDING_ITERATOR_H
#define BUILDING_ITERATOR_H

#include <stddef.h>
#include <vector>

class Building;

class BuildingIterator {
private:
    const std::vector<Building*>& buildings;
    size_t currentIndex;

public:
    BuildingIterator(const std::vector<Building*>& buildings);
    Building* next();
    bool hasNext() const;
    void reset();
};

#endif // BUILDING_ITERATOR_H
