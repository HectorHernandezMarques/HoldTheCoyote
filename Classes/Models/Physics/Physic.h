#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSIC_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSIC_H

#include <cocos2d.h>

namespace HoldTheCoyote::Models::Physics {

    class Physic {
    public:
        Physic(cocos2d::PhysicsBody &physic);
        virtual ~Physic() = default;

        Physic(Physic const &rhs) = delete;
        Physic &operator=(Physic const &rhs) = delete;

        Physic(Physic &&rhs) noexcept = delete;
        Physic &operator=(Physic &&rhs) noexcept = delete;

        cocos2d::PhysicsBody &getPhysic();
        cocos2d::Vec2 getVelocity();
        void setDynamic(bool dynamic);
        void setCategoryBitmask(int bitmask);
        void setCollisionBitmask(int bitmask);
        void setContactTestBitmask(int bitmask);
        void setRotationEnable(bool enable);
        void setVelocity(cocos2d::Vec2 velocity);
        void setVelocityLimit(float velocity);
        void setFriction(float friction);

    protected:
        cocos2d::PhysicsBody &physic;

    };
}

#endif