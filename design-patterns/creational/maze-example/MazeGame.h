#include "../abstract-factory/MazeFactory.h"

#pragma once

class MazeGame {
    public:
        auto createMazeUsingAbsFactory(MazeFactory &mf) -> Maze*;
};
