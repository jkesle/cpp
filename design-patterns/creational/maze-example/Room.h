#include "MapSite.h"
#include "Direction.h"
#include <array>

#pragma once

class Room : public MapSite {
    public:
        virtual auto setSide(Direction d, MapSite *ms) -> void;
        virtual auto getSide(Direction d) const -> MapSite*;
        virtual auto getRoomNo() -> int;
};
