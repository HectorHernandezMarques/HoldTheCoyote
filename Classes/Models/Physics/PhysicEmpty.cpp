#include "PhysicEmpty.h"

namespace HoldTheCoyote::Models::Physics {

    PhysicEmpty::PhysicEmpty() : Physic(this->init()) {
    }

    cocos2d::PhysicsBody &PhysicEmpty::init() {
        cocos2d::PhysicsBody &result = *cocos2d::PhysicsBody::create();
        result.setDynamic(false);
        result.setCategoryBitmask(false);
        result.setContactTestBitmask(false);
        result.setCollisionBitmask(false);
        return result;
    }
}