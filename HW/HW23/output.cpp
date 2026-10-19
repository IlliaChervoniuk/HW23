#include "output.h"
#include <iostream>

#include "Accommodation.h"
#include "Apartment.h"
#include "House.h"
#include "Room.h"

void output(){
    Accommodation* stock[3];
    stock[0] = (new Apartment())
        ->setStory(5)
        ->setBalcony("yes")
        ->setNumberOfRooms(3)
        ->setName("Затишна квартира в центрі")
        ->setAddress("вул. Хрещатик, 15")
        ->setCapacity(4)
        ->setArea(55.5)
        ->setPrice(1800);

    stock[1] = (new House())
        ->setNumberOfFloors(2)
        ->setNumberOfRooms(5)
        ->setName("Вілла біля лісу")
        ->setAddress("вул. Лісова, 42")
        ->setCapacity(8)
        ->setArea(180.0)
        ->setPrice(4500);

    stock[2] = (new Room())
        ->setFurniture("Двоспальне ліжко, шафа, стіл")
        ->setPrivateEntre("yes")
        ->setName("Сонячна кімната")
        ->setAddress("вул. Зелена, 8")
        ->setCapacity(2)
        ->setArea(20.0)
        ->setPrice(750);

    for (auto accommodation : stock) {
        std::cout << accommodation->toString() << std::endl;
    }
}
