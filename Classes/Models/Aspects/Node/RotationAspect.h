#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ROTATIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ROTATIONASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class RotationAspect : virtual public Aspect {
    public:
        RotationAspect(float rotation);
        virtual ~RotationAspect() = default;

        void visit(Views::Node &node) override;

    protected:

    private:
        float rotation;

    };
}

#endif
