#include "PhysicAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    PhysicAspect::PhysicAspect(cocos2d::PhysicsBody &physicBody) : physicBody(physicBody) {
    }

    void PhysicAspect::visit(Views::Node &node) {
        node.setPhysic(this->physicBody);
    }
}