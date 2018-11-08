#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_POSITIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_POSITIONASPECT_H

#include "Aspect.h"
#include "../../../EngineAbstraction/Interfaces/Vec2.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class PositionAspect : virtual public Aspect {
    public:
        PositionAspect(EngineAbstraction::Vec2 &position);
        virtual ~PositionAspect() = default;

        PositionAspect(PositionAspect const &rhs) = delete;
        PositionAspect &operator=(PositionAspect const &rhs) = delete;

        PositionAspect(PositionAspect &&rhs) noexcept = delete;
        PositionAspect &operator=(PositionAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        EngineAbstraction::Vec2 &position;
    };
}

#endif
