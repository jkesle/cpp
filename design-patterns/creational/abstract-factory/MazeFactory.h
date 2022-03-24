#include "../maze-example/Maze.h"
#include "../maze-example/Door.h"
#include "../maze-example/Wall.h"

#pragma once

class MazeFactory {

    public:
        virtual auto makeMaze() -> Maze* = 0;
        virtual auto makeRoom(int n) -> Room* = 0;
        virtual auto makeDoor(Room* r1, Room* r2) -> Door* = 0;
        virtual auto makeWall() -> Wall* = 0;
        virtual auto getNextRoomNum() -> int = 0;
};
