#include "../maze-example/Room.h"

#pragma once

class RegularRoom : public Room {
    private:
        int const roomNumber;
        std::array<MapSite*, 4> sides;

    public:
        explicit RegularRoom(int roomNumber) : roomNumber{roomNumber},
            sides{nullptr, nullptr, nullptr, nullptr} {};

        auto getSide(Direction d) const -> MapSite* override;
        auto setSide(Direction d, MapSite *ms) -> void override;
        auto enter() -> void override;
        auto getRoomNo() -> int override;
};
