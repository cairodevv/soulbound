#ifndef ENEMY
#define ENEMY
#include "../entity.h"

class Enemy : public Entity {
    public:




    
        Enemy(
            std::pair<int, int> pos = {0,0}, 
            bool visibility = true
        )
         : Entity(pos, visibility) {};
};

#endif