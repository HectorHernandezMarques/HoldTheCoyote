#ifndef ENGINEABSTRACTION_PHYSICSBODY_H
#define ENGINEABSTRACTION_PHYSICSBODY_H

#include "Vec2.h"
#include "PhysicsShape.h"
#include <vector>

namespace EngineAbstraction {
    class PhysicsBody {
    public:
        virtual Vec2 &getVelocity() = 0;
        virtual void setDynamic(bool dynamic) = 0;
        virtual void setCategoryBitmask(int categoryBitmask) = 0;
        virtual void setCollisionBitmask(int collisionBitmask) = 0;
        virtual void setContactTestBitmask(int contactTestBitmask) = 0;
        virtual void setRotationEnable(bool enable) = 0;
        virtual void setVelocity(Vec2 &velocity) = 0;
        virtual void setVelocityLimit(float velocityLimit) = 0;
        virtual std::vector<PhysicsShape *> getShapes() const = 0;

    };

}

#endif
