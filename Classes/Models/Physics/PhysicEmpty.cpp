#include "PhysicEmpty.h"
#include <EngineFactory.h>

namespace HoldTheCoyote::Models::Physics {

    PhysicEmpty::PhysicEmpty() : Physic(this->init()) {
    }

    EngineAbstraction::PhysicsBody &PhysicEmpty::init() {
        EngineAbstraction::PhysicsBody &result = EngineAbstraction::EngineFactory::getInstance().createPhysicsBody();
        result.setDynamic(false);
        result.setCategoryBitmask(false);
        result.setContactTestBitmask(false);
        result.setCollisionBitmask(false);
        return result;
    }
}