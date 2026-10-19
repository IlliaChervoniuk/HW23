#include "PrivateRoom.h"


int PrivateRoom::getStory() const
{
    return story;
}
PrivateRoom* PrivateRoom::setStory(int story)
{
    this->story = story;
    return this;
}