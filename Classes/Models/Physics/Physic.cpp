#include "Physic.h"
#include <cassert>

namespace HoldTheCoyote::Models::Physics {

    Physic::Physic(EngineAbstraction::PhysicsBody &physicsBody) : physicsBody(physicsBody) {
        assert(&physicsBody);
    }

    Physic::~Physic() {
        delete &this->physicsBody;
    }

    EngineAbstraction::PhysicsBody &Physic::getPhysic() {
        assert(&this->physicsBody);

        return this->physicsBody;
    }

    EngineAbstraction::Vec2 &Physic::getVelocity() {
        assert(&this->physicsBody);

        return this->physicsBody.getVelocity();
    }

    void Physic::setDynamic(bool dynamic) {

        this->physicsBody.setDynamic(dynamic);
    }

    void Physic::setCategoryBitmask(int bitmask) {
        assert(&this->physicsBody);

        this->physicsBody.setCategoryBitmask(bitmask);

    }

    void Physic::setCollisionBitmask(int bitmask) {
        assert(&this->physicsBody);

        this->physicsBody.setCollisionBitmask(bitmask);
    }

    void Physic::setContactTestBitmask(int bitmask) {
        assert(&this->physicsBody);

        this->physicsBody.setContactTestBitmask(bitmask);
    }

    void Physic::setRotationEnable(bool enable) {
        assert(&this->physicsBody);

        this->physicsBody.setRotationEnable(enable);
    }

    void Physic::setVelocity(EngineAbstraction::Vec2 &velocity) {
        assert(&this->physicsBody);
        assert(&velocity);

        this->physicsBody.setVelocity(velocity);
    }

    void Physic::setVelocityLimit(float velocity) {
        assert(&this->physicsBody);

        this->physicsBody.setVelocityLimit(velocity);
    }

    void Physic::setFriction(float friction) {
        assert(&this->physicsBody);

        std::vector<EngineAbstraction::PhysicsShape *> shapes = this->physicsBody.getShapes();

        for (auto it = shapes.begin(); it != shapes.end(); ++it) {
            (*it)->setFriction(friction);
        }
    }

}