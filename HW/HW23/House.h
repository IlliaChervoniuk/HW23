#pragma once
#include "EntirePlace.h"

class House : public EntirePlace {
private:
    int number_of_floors;
public:
    int getNumberOfFloors() const;
    House* setNumberOfFloors(int);
    std::string toString() const override;
};