#include "../maze-example/Maze.h"
#include "../maze-example/Door.h"
#include "../maze-example/Wall.h"

#pragma once

class MazeFactory {

    public:
        virtual auto makeMaze() -> Maze* = 0;
        virtual auto makeRoom() -> Room* = 0;
        virtual auto makeDoor() -> Door* = 0;
        virtual auto makeWall() -> Wall* = 0;
};
