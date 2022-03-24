#include "../abstract-factory/MazeFactory.h"
#include "../builder/MazeBuilder.h"

#pragma once

class MazeGame {
    public:
        auto createMaze(MazeFactory &mf) -> Maze*;
        auto createMaze(MazeBuilder &mb) -> Maze*;
};
