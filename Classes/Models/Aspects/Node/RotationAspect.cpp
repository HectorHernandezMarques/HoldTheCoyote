#include "RotationAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    RotationAspect::RotationAspect(float rotation) : rotation(rotation) {
    }

    void RotationAspect::visit(Views::Node &node) {
        node.setRotation(this->rotation);
    }
}