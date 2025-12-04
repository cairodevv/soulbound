#ifndef ENTITY
#define ENTITY
#include <array>
#include <vector>
#include <map>
#include <utility>
#include <string>

class Entity {
    public:
        std::string spriteSheet;
        std::array<float, 4> initSpriteSheetCoords;
        std::map<std::string, std::vector<std::array<float, 4>>> animations;
        std::pair<int, int> position;
        bool isVisible;
        double health;
        
        void animate(std::string animationIdentifier);
        

        Entity(
            std::string mainSpriteSheet,
            std::pair<int, int> pos, 
            bool visibility,
            double initHealth
        )
         : spriteSheet{mainSpriteSheet}, position{pos}, isVisible{visibility}, health{initHealth} {};
};        
#endif