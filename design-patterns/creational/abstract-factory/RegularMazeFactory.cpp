#include "RegularMazeFactory.h"
#include "RegularRoom.h"

auto RegularMazeFactory::makeMaze() -> Maze* {
    return new Maze;
}

auto RegularMazeFactory::makeRoom() -> Room* {
    return new RegularRoom;
}
