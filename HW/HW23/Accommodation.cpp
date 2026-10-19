#include <string>
#include "Accommodation.h"

double Accommodation::getArea() const
{
    return area;
}
Accommodation* Accommodation::setArea(double area)
{
    this->area = area;
    return this;
}
std::string Accommodation::getName() const
{
    return name;
}
Accommodation* Accommodation::setName(std::string name)
{
    this->name = name;
    return this;
}
double Accommodation::getPrice() const
{
    return price;
}
Accommodation* Accommodation::setPrice(double price)
{
    this->price = price;
    return this;
}
std::string Accommodation::getAddress() const
{
    return address;
}
Accommodation* Accommodation::setAddress(std::string address)
{
    this->address = address;
    return this;
}

int Accommodation::getCapacity() const
{
    return capacity;
}
Accommodation* Accommodation::setCapacity(int capacity)
{
    this->capacity = capacity;
    return this;
}

