#include "MazeFactory.h"

#pragma once

class RegularMazeFactory : public MazeFactory {
    private:
        int roomCounter;

    public:
        explicit RegularMazeFactory(int roomCntInit = 0) : roomCounter{roomCntInit} {}

        auto makeMaze() -> Maze* override;
        auto makeRoom(int n) -> Room* override;
        auto makeWall() -> Wall* override;
        auto makeDoor(Room* r1, Room* r2) -> Door* override;
        auto getNextRoomNum() -> int override;

};
