#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICEMPTY_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICEMPTY_H

#include <cocos2d.h>
#include "Physic.h"

namespace HoldTheCoyote::Models::Physics {

    class PhysicEmpty : public Physic {
    public:
        PhysicEmpty();
        virtual ~PhysicEmpty() = default;

    protected:
        cocos2d::PhysicsBody &init();

    };
}

#endif
