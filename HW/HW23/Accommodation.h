#pragma once
#include <string>

class Accommodation{
private:
    double area;
    std::string name;
    double price;
    std::string address;
    int capacity;
public:
    double getArea() const;
    Accommodation* setArea(double);
    std::string getName() const;
    Accommodation* setName(std::string);
    double      getPrice() const;
    Accommodation*    setPrice(double);
    std::string getAddress() const;
    Accommodation* setAddress(std::string);
    int getCapacity() const;
    Accommodation* setCapacity(int);
    virtual std::string toString() const = 0;
};


