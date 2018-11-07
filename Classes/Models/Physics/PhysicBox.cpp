#include "PhysicBox.h"
#include <EngineFactory.h>

namespace HoldTheCoyote::Models::Physics {

    PhysicBox::PhysicBox(int bitmask, EngineAbstraction::Size size) : Physic(this->init(bitmask, size)) {
    }

    EngineAbstraction::PhysicsBody &PhysicBox::init(int bitmask, EngineAbstraction::Size &size) {
        EngineAbstraction::PhysicsBody &result = EngineAbstraction::EngineFactory::getInstance().createPhysicsBodyBox(
                size);
        result.setCollisionBitmask(bitmask);
        return result;
    }
}