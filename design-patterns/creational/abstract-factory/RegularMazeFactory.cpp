#include "RegularMazeFactory.h"
#include "RegularRoom.h"
#include "RegularDoor.h"

auto RegularMazeFactory::getNextRoomNum() -> int {
    return this->roomCounter++;
}

auto RegularMazeFactory::makeMaze() -> Maze* {
    return new Maze;
}

auto RegularMazeFactory::makeRoom(int n) -> Room* {
    return new RegularRoom(n);
}

auto RegularMazeFactory::makeDoor(Room* r1, Room* r2) -> Door* {
    return new RegularDoor{r1, r2};
}

auto RegularMazeFactory::makeWall() -> Wall* {
    return new Wall;
}
