#include "Maze.h"

auto Maze::addRoom(Room *r) -> void {
    this->rooms.push_back(r);
}

auto Maze::roomNo(int roomNum) const -> Room* {
    for (Room * r : this->rooms) {
        if (r->getRoomNo() == roomNum) {
            return r;
        }
    }
    return nullptr;
}
