#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ASPECT_H

#include "../../../Views/Node.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class Aspect {
    public:
        virtual void visit(Views::Node &node) = 0;
    };
}

#endif
