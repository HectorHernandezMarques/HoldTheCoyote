#include "PhysicsBody.h"
#include "Vec2.h"
#include "PhysicsShape.h"

namespace EngineAbstraction::Cocos {

    PhysicsBody::PhysicsBody(cocos2d::PhysicsBody &physicsBody) : physicsBody(physicsBody) {

    }

    EngineAbstraction::Vec2 &PhysicsBody::getVelocity() {
        return *new Vec2(this->physicsBody.getVelocity());
    }

    void PhysicsBody::setDynamic(bool dynamic) {
        this->physicsBody.setDynamic(dynamic);
    }

    void PhysicsBody::setCategoryBitmask(int categoryBitmask) {
        this->physicsBody.setCategoryBitmask(categoryBitmask);
    }

    void PhysicsBody::setCollisionBitmask(int collisionBitmask) {
        this->physicsBody.setCollisionBitmask(collisionBitmask);
    }

    void PhysicsBody::setContactTestBitmask(int contactTestBitmask) {
        this->physicsBody.setContactTestBitmask(contactTestBitmask);
    }

    void PhysicsBody::setRotationEnable(bool enable) {
        this->physicsBody.setRotationEnable(enable);
    }

    void PhysicsBody::setVelocity(EngineAbstraction::Vec2 &velocity) {
        this->physicsBody.setVelocity(static_cast<Vec2 &>(velocity).getVec2());
    }

    void PhysicsBody::setVelocityLimit(float velocityLimit) {
        this->physicsBody.setVelocityLimit(velocityLimit);
    }

    std::vector<EngineAbstraction::PhysicsShape *> PhysicsBody::getShapes() const {
        std::vector<EngineAbstraction::PhysicsShape *> result;
        for (auto it = this->physicsBody.getShapes().begin(); it != this->physicsBody.getShapes().end(); ++it) {
            result.insert(result.begin(), new PhysicsShape(**it));
        }
        return result;
    }

}