#ifndef CONTROLLABLE_CHARACTER
#define CONTROLLABLE_CHARACTER
#include "../entity.h"

class ControllableCharacter : public Entity {
    public:
        int test {6};

        void moveLeft(bool sprinting = false);
        void moveRight(bool sprinting = false);
        void jump();
        void duck();
        ControllableCharacter(
            std::pair<int, int> pos = {0,0}, 
            bool visibility = true
        )
         : Entity(pos, visibility) {};
};
#endif 