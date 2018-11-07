#include "PhysicsShape.h"

namespace EngineAbstraction::Cocos {

    PhysicsShape::PhysicsShape(cocos2d::PhysicsShape &physicsShape) : physicsShape(
            physicsShape) {

    }

    void PhysicsShape::setFriction(float friction) {
        this->physicsShape.setFriction(friction);
    }
}