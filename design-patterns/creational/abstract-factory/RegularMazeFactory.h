#include "MazeFactory.h"

#pragma once

class RegularMazeFactory : public MazeFactory {
    public:
        auto makeMaze() -> Maze* override;
        auto makeRoom() -> Room* override;
        auto makeWall() -> Wall* override;
        auto makeDoor() -> Door* override;
};
