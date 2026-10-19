#include <format>
#include "Room.h"

std::string Room::getFurniture() const {
    return furniture;
}

Room * Room::setFurniture(std::string furniture) {
    this->furniture =furniture;
    return this;
}

std::string Room::getPrivateEntre() const {
    return privateEntre;
}

Room * Room::setPrivateEntre(std::string privateEntre) {
    this->privateEntre = privateEntre;
    return this;
}

std::string Room::toString() const {
    return std::format("{}, {} hrn,  {} , {} people, {}m^2, {} , private entre {}",
        getName(),
        getPrice(),
        getAddress(),
        getCapacity(),
        getArea(),
        getFurniture(),
        getPrivateEntre()
        );
}
