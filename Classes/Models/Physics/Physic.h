#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSIC_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSIC_H

#include "../../EngineAbstraction/Interfaces/Vec2.h"
#include "../../EngineAbstraction/Interfaces/PhysicsBody.h"

namespace HoldTheCoyote::Models::Physics {

    class Physic {
    public:
        Physic(EngineAbstraction::PhysicsBody &physic);
        virtual ~Physic();

        Physic(Physic const &rhs) = delete;
        Physic &operator=(Physic const &rhs) = delete;

        Physic(Physic &&rhs) noexcept = delete;
        Physic &operator=(Physic &&rhs) noexcept = delete;

        EngineAbstraction::PhysicsBody &getPhysic();
        EngineAbstraction::Vec2 &getVelocity();
        void setDynamic(bool dynamic);
        void setCategoryBitmask(int bitmask);
        void setCollisionBitmask(int bitmask);
        void setContactTestBitmask(int bitmask);
        void setRotationEnable(bool enable);
        void setVelocity(EngineAbstraction::Vec2 &velocity);
        void setVelocityLimit(float velocity);
        void setFriction(float friction);

    protected:
        EngineAbstraction::PhysicsBody &physicsBody;

    };
}

#endif