#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_PHYSICASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_PHYSICASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class PhysicAspect : virtual public Aspect {
    public:
        PhysicAspect(cocos2d::PhysicsBody &physicBody);
        virtual ~PhysicAspect() = default;

        PhysicAspect(PhysicAspect const &rhs) = delete;
        PhysicAspect &operator=(PhysicAspect const &rhs) = delete;

        PhysicAspect(PhysicAspect &&rhs) noexcept = delete;
        PhysicAspect &operator=(PhysicAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        cocos2d::PhysicsBody &physicBody;
    };
}

#endif
