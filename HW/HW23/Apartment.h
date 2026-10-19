#pragma once
#include <string>
#include "EntirePlace.h"

class Apartment : public EntirePlace
{
private:
    int story;
    std::string balcony;
public:
    int getStory() const;
    Apartment* setStory(int);
    std::string getBalcony() const;
    Apartment* setBalcony(std::string);
    std::string toString() const override;
};
