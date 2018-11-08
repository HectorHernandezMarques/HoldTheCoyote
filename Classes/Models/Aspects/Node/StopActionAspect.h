#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_STOPACTIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_STOPACTIONASPECT_H

#include "Aspect.h"
#include "../../../EngineAbstraction/Interfaces/Action.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class StopActionAspect : virtual public Aspect {
    public:
        StopActionAspect(EngineAbstraction::Action &animationAction);
        virtual ~StopActionAspect() = default;

        StopActionAspect(StopActionAspect const &rhs) = delete;
        StopActionAspect &operator=(StopActionAspect const &rhs) = delete;

        StopActionAspect(StopActionAspect &&rhs) noexcept = delete;
        StopActionAspect &operator=(StopActionAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        EngineAbstraction::Action &animationAction;
    };
}

#endif
