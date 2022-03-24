#include "../maze-example/Door.h"

class RegularDoor : public Door {
    private:
        Room *room1;
        Room *room2;
        bool isOpen;

    public:
        explicit RegularDoor(Room *r1 = nullptr, Room *r2 = nullptr) : room1{r1}, room2{r2}, isOpen(true) {}
        auto otherSide(Room* r) -> Room * override;
        auto enter() -> void override;
};
