#include "MazeGame.h"

auto MazeGame::createMaze(MazeFactory &mf) -> Maze* {
    Maze *maze = mf.makeMaze();
    Room *room1 = mf.makeRoom(mf.getNextRoomNum());
    Room *room2 = mf.makeRoom(mf.getNextRoomNum());
    Door *door1 = mf.makeDoor(room1, room2);
    Wall *wall1 = mf.makeWall();

    maze->addRoom(room1);
    maze->addRoom(room2);

    room1->setSide(North, wall1);
    room1->setSide(East, door1);
    room1->setSide(West, wall1);
    room1->setSide(South, wall1);

    room2->setSide(North, wall1);
    room2->setSide(East, wall1);
    room2->setSide(West, door1);
    room2->setSide(South, wall1);

    return maze;
}

auto MazeGame::createMaze(MazeBuilder &mb) -> Maze* {
    mb.buildMaze();

    mb.buildRoom(1);
    mb.buildRoom(2);

    mb.buildDoor(DoorFromTo{1, 2});

    return mb.getMaze();
};
