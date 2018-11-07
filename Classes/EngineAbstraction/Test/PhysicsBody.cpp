#include "PhysicsBody.h"
#include "Vec2.h"
#include "PhysicsShape.h"

namespace EngineAbstraction::Test {

    EngineAbstraction::Vec2 &PhysicsBody::getVelocity() {
        return *new Vec2();
    }

    void PhysicsBody::setDynamic(bool dynamic) {
    }

    void PhysicsBody::setCategoryBitmask(int categoryBitmask) {
    }

    void PhysicsBody::setCollisionBitmask(int collisionBitmask) {
    }

    void PhysicsBody::setContactTestBitmask(int contactTestBitmask) {
    }

    void PhysicsBody::setRotationEnable(bool enable) {
    }

    void PhysicsBody::setVelocity(EngineAbstraction::Vec2 &velocity) {
    }

    void PhysicsBody::setVelocityLimit(float velocityLimit) {
    }

    std::vector<EngineAbstraction::PhysicsShape *> PhysicsBody::getShapes() const {
        return std::vector<EngineAbstraction::PhysicsShape *>();
    }

}