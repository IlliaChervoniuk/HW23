#include "House.h"
#include <format>

int House::getNumberOfFloors() const {
    return number_of_floors;
}

House * House::setNumberOfFloors(int number_of_floors) {
    this->number_of_floors = number_of_floors;
    return this;
}

std::string House::toString() const {
        return std::format("{}, {} hrn,  {} , {} people, {}m^2, {} floors, {} rooms",
            getName(),
            getPrice(),
            getAddress(),
            getCapacity(),
            getArea(),
            getNumberOfFloors(),
            getNumberOfRooms()
            );
}
