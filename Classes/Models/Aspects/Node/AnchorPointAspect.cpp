#include "AnchorPointAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    AnchorPointAspect::AnchorPointAspect(EngineAbstraction::Vec2 anchorPoint) : Aspect(), anchorPoint(anchorPoint) {
    }

    void AnchorPointAspect::visit(Views::Node &node) {
        node.setAnchorPoint(this->anchorPoint);
    }
}