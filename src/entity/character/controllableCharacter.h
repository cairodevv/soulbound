#ifndef CONTROLLABLE_CHARACTER
#define CONTROLLABLE_CHARACTER
#include "../entity.h"

class ControllableCharacter : public Entity {
    public:

        void moveLeft(bool sprinting = false);
        void moveRight(bool sprinting = false);
        void jump();
        void duck();

        ControllableCharacter(
            std::string mainSpriteSheet,
            std::pair<int, int> pos, 
            bool visibility,
            double initHealth
        )
         : Entity(mainSpriteSheet, pos, visibility, initHealth) {};
};
#endif 