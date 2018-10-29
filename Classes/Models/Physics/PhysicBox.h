#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICBOX_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICBOX_H

#include <cocos2d.h>
#include "Physic.h"

namespace HoldTheCoyote::Models::Physics {

    class PhysicBox : public Physic {
    public:
        PhysicBox(int bitmask, cocos2d::Size size);
        ~PhysicBox() override = default;

        PhysicBox(PhysicBox const &rhs) = delete;
        PhysicBox &operator=(PhysicBox const &rhs) = delete;

        PhysicBox(PhysicBox &&rhs) noexcept = delete;
        PhysicBox &operator=(PhysicBox &&rhs) noexcept = delete;

    protected:
        cocos2d::PhysicsBody &init(int bitmask, cocos2d::Size &size);

    private:
        cocos2d::Size size;

    };
}

#endif
