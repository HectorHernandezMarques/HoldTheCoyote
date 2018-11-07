#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ADDEVENTLISTENERWITHSCENEGRAPHPRIORITYASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ADDEVENTLISTENERWITHSCENEGRAPHPRIORITYASPECT_H

#include <cocos2d.h>
#include "Aspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class AddEventListenerWithSceneGraphPriorityAspect : virtual public Aspect {
    public:
        AddEventListenerWithSceneGraphPriorityAspect(cocos2d::EventListener &listener);
        virtual ~AddEventListenerWithSceneGraphPriorityAspect() = default;

        AddEventListenerWithSceneGraphPriorityAspect(AddEventListenerWithSceneGraphPriorityAspect const &rhs) = delete;
        AddEventListenerWithSceneGraphPriorityAspect &operator=(AddEventListenerWithSceneGraphPriorityAspect const &rhs) = delete;

        AddEventListenerWithSceneGraphPriorityAspect(AddEventListenerWithSceneGraphPriorityAspect &&rhs) noexcept = delete;
        AddEventListenerWithSceneGraphPriorityAspect &operator=(AddEventListenerWithSceneGraphPriorityAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        cocos2d::EventListener &listener;
    };
}

#endif
