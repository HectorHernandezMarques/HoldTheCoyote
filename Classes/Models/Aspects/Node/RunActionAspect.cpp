#include "RunActionAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    RunActionAspect::RunActionAspect(EngineAbstraction::Action &action) : action(action) {
    }

    RunActionAspect::~RunActionAspect() {

    }

    void RunActionAspect::visit(Views::Node &node) {
        node.runAction(this->action);
    }
}
