#pragma once
#include "Accommodation.h"

class PrivateRoom : public Accommodation {
private:
    int story;
public:
    int getStory() const;
    PrivateRoom* setStory(int);
    virtual std::string toString() const = 0;
};