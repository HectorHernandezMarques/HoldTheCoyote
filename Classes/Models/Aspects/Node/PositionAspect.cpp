#include "PositionAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    PositionAspect::PositionAspect(EngineAbstraction::Vec2 &position) : position(position) {
    }

    void PositionAspect::visit(Views::Node &node) {
        node.setPosition(this->position);
    }
}