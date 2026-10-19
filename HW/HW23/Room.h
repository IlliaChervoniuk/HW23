#pragma once
#include "PrivateRoom.h"
#include <string>

class Room : public PrivateRoom {
private:
    std::string furniture;
    std::string privateEntre;
public:
    std::string getFurniture() const;
    Room* setFurniture(std::string);
    std::string getPrivateEntre() const;
    Room* setPrivateEntre(std::string);
    std::string toString() const override;
};
