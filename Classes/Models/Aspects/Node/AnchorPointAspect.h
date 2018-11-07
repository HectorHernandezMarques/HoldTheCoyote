#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ANCHORPOINTASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ANCHORPOINTASPECT_H

#include <cocos2d.h>
#include "Aspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class AnchorPointAspect : virtual public Aspect {
    public:
        AnchorPointAspect(cocos2d::Vec2 anchorPoint);
        virtual ~AnchorPointAspect() = default;

        AnchorPointAspect(AnchorPointAspect const &rhs) = delete;
        AnchorPointAspect &operator=(AnchorPointAspect const &rhs) = delete;

        AnchorPointAspect(AnchorPointAspect &&rhs) noexcept = delete;
        AnchorPointAspect &operator=(AnchorPointAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        cocos2d::Vec2 anchorPoint;
    };
}

#endif
