#include <format>
#include "Apartment.h"

int Apartment::getStory() const
{
    return story;
}
Apartment* Apartment::setStory(int story)
{
    this->story = story;
    return this;
}
std::string Apartment::getBalcony() const
{
    return balcony;
}
Apartment* Apartment::setBalcony(std::string balcony)
{
    this->balcony = balcony;
    return this;
}
std::string Apartment::toString() const
{
    return std::format("{}, {} hrn,  {} , {} people, {}m^2, {} floor, balcony - {}, {} rooms",
        getName(),
        getPrice(),
        getAddress(),
        getCapacity(),
        getArea(),
        getStory(),
        getBalcony(),
        getNumberOfRooms()
        );
}



