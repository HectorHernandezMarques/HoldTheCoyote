#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ROTATIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ROTATIONASPECT_H

#include <cocos2d.h>
#include "Aspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class RotationAspect : virtual public Aspect {
    public:
        RotationAspect(float rotation);
        virtual ~RotationAspect() = default;

        RotationAspect(RotationAspect const &rhs) = delete;
        RotationAspect &operator=(RotationAspect const &rhs) = delete;

        RotationAspect(RotationAspect &&rhs) noexcept = delete;
        RotationAspect &operator=(RotationAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        float rotation;

    };
}

#endif
