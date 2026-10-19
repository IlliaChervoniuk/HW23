#pragma once
#include "Accommodation.h"

class EntirePlace : public Accommodation
{
private:
    double area;
    int numberofRooms;
public:

    int getNumberOfRooms() const;
    EntirePlace* setNumberOfRooms(int);
    virtual std::string toString() const = 0;
};
