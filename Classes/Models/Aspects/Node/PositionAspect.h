#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_POSITIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_POSITIONASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class PositionAspect : virtual public Aspect {
    public:
        PositionAspect(cocos2d::Vec2 &position);
        virtual ~PositionAspect() = default;

        PositionAspect(PositionAspect const &rhs) = delete;
        PositionAspect &operator=(PositionAspect const &rhs) = delete;

        PositionAspect(PositionAspect &&rhs) noexcept = delete;
        PositionAspect &operator=(PositionAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        cocos2d::Vec2 &position;
    };
}

#endif
