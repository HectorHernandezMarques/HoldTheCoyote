#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_RUNACTIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_RUNACTIONASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class RunActionAspect : virtual public Aspect {
    public:
        RunActionAspect(cocos2d::Action *action);
        virtual ~RunActionAspect();

        RunActionAspect(RunActionAspect const &rhs) = delete;
        RunActionAspect &operator=(RunActionAspect const &rhs) = delete;

        RunActionAspect(RunActionAspect &&rhs) noexcept = delete;
        RunActionAspect &operator=(RunActionAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        cocos2d::Action *action;
    };
}

#endif
