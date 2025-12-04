#ifndef ENEMY
#define ENEMY
#include "../entity.h"

class Enemy : public Entity {
    public:




    
        Enemy(
            std::pair<int, int> pos, 
            bool visibility,
            double initHealth
        )
         : Entity(pos, visibility, initHealth) {};
};

#endif