#include "MapSite.h"
#include "Room.h"

#pragma once

class Door : public MapSite {
    public:
        virtual auto otherSide(Room *r) -> Room * = 0;
};
