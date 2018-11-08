#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_RUNACTIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_RUNACTIONASPECT_H

#include "Aspect.h"
#include "../../../EngineAbstraction/Interfaces/Action.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class RunActionAspect : virtual public Aspect {
    public:
        RunActionAspect(EngineAbstraction::Action &action);
        virtual ~RunActionAspect();

        RunActionAspect(RunActionAspect const &rhs) = delete;
        RunActionAspect &operator=(RunActionAspect const &rhs) = delete;

        RunActionAspect(RunActionAspect &&rhs) noexcept = delete;
        RunActionAspect &operator=(RunActionAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        EngineAbstraction::Action &action;
    };
}

#endif
