#include "PhysicAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    PhysicAspect::PhysicAspect(EngineAbstraction::PhysicsBody &physicBody) : physicBody(physicBody) {
    }

    void PhysicAspect::visit(Views::Node &node) {
        node.setPhysic(this->physicBody);
    }
}