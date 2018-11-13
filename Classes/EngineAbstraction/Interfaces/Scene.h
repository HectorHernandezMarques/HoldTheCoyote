#ifndef ENGINEABSTRACTION_SCENE_H
#define ENGINEABSTRACTION_SCENE_H

#include "Sprite.h"

namespace EngineAbstraction {
    class Scene {
    public:
        virtual void addChild(EngineAbstraction::Sprite &child) = 0;
        virtual void removeChild(EngineAbstraction::Sprite &child) = 0;

    };
}

#endif
