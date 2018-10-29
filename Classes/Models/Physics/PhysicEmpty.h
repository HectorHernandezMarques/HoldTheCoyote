#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICEMPTY_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICEMPTY_H

#include <cocos2d.h>
#include "Physic.h"

namespace HoldTheCoyote::Models::Physics {

    class PhysicEmpty : public Physic {
    public:
        PhysicEmpty();
        ~PhysicEmpty() override = default;

        PhysicEmpty(PhysicEmpty const &rhs) = delete;
        PhysicEmpty &operator=(PhysicEmpty const &rhs) = delete;

        PhysicEmpty(PhysicEmpty &&rhs) noexcept = delete;
        PhysicEmpty &operator=(PhysicEmpty &&rhs) noexcept = delete;

    protected:
        cocos2d::PhysicsBody &init();

    };
}

#endif
