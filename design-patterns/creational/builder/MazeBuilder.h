#include "../maze-example/Maze.h"
#include "../abstract-factory/RegularRoom.h"

#pragma once

struct DoorFromTo {
    int from;
    int to;
};

// Abstract Builder... not purely abstract to allow concrete builder classes to override what they'd like
class MazeBuilder {
    public:
        virtual auto buildMaze() -> void {};
        virtual auto buildRoom(int roomNum) -> void {};
        virtual auto buildDoor(DoorFromTo fromTo) -> void {};

        virtual auto getMaze() -> Maze* {return nullptr;}

    protected:
        MazeBuilder();
};

class StandardMazeBuilder : public MazeBuilder {
    private:
        Maze* stdMaze;

    public:
        auto buildMaze() -> void override {
            this->stdMaze = {new Maze};
        }

        auto buildRoom(int roomNum) -> void override {
            Room* room {new RegularRoom{roomNum}};

            this->stdMaze->addRoom(room);
        }

};
