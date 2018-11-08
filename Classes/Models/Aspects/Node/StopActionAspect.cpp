#include "StopActionAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    StopActionAspect::StopActionAspect(EngineAbstraction::Action &animationAction) : animationAction(animationAction) {
    }

    void StopActionAspect::visit(Views::Node &node) {
        node.stopAction(this->animationAction);
    }
}