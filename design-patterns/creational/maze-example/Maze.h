#include "Room.h"
#include <vector>

#pragma once

class Maze {
    private:
        std::vector<Room*> rooms;
    public:
        auto addRoom(Room *r) -> void;
        auto roomNo(int roomNum) const -> Room*;
};
