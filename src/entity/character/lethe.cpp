#include "controllableCharacter.h"

namespace character {
    ControllableCharacter lethe(std::pair<int, int> pos, bool visibility, double initHealth) {
        ControllableCharacter lethe = {"lethe.png", pos, visibility, initHealth};
        lethe.initSpriteSheetCoords = {0.0f, 0.8f, 0.1f, 1.0f};
        lethe.animations = {
            {"walk_cycle", {
                lethe.initSpriteSheetCoords,
                {0.1f, 0.8f, 0.2f, 1.0f},
                {0.2f, 0.8f, 0.3f, 1.0f},
                {0.3f, 0.8f, 0.4f, 1.0f},
                {0.4f, 0.8f, 0.5f, 1.0f},
                {0.5f, 0.8f, 0.6f, 1.0f},
                {0.6f, 0.8f, 0.7f, 1.0f},
                {0.7f, 0.8f, 0.8f, 1.0f},
                {0.8f, 0.8f, 0.9f, 1.0f},
                {0.9f, 0.8f, 1.0f, 1.0f}
            }},
            {"sweep_attack", {
                lethe.initSpriteSheetCoords,
                {0.1f, 0.6f, 0.2f, 0.8f},
                {0.2f, 0.6f, 0.3f, 0.8f},
                {0.3f, 0.6f, 0.4f, 0.8f},
                {0.4f, 0.6f, 0.5f, 0.8f},
                {0.5f, 0.6f, 0.6f, 0.8f},
                {0.6f, 0.6f, 0.7f, 0.8f},
                {0.7f, 0.6f, 0.8f, 0.8f},
                {0.8f, 0.6f, 0.9f, 0.8f},
                {0.9f, 0.6f, 1.0f, 0.8f}
            }}
        };
        return lethe;
    }
}