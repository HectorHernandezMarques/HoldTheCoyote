#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ADDEVENTLISTENERWITHSCENEGRAPHPRIORITYASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ADDEVENTLISTENERWITHSCENEGRAPHPRIORITYASPECT_H

#include "Aspect.h"
#include "../../../EngineAbstraction/Interfaces/EventListener.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class AddEventListenerWithSceneGraphPriorityAspect : virtual public Aspect {
    public:
        AddEventListenerWithSceneGraphPriorityAspect(EngineAbstraction::EventListener &listener);
        virtual ~AddEventListenerWithSceneGraphPriorityAspect() = default;

        AddEventListenerWithSceneGraphPriorityAspect(AddEventListenerWithSceneGraphPriorityAspect const &rhs) = delete;
        AddEventListenerWithSceneGraphPriorityAspect &operator=(AddEventListenerWithSceneGraphPriorityAspect const &rhs) = delete;

        AddEventListenerWithSceneGraphPriorityAspect(AddEventListenerWithSceneGraphPriorityAspect &&rhs) noexcept = delete;
        AddEventListenerWithSceneGraphPriorityAspect &operator=(AddEventListenerWithSceneGraphPriorityAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        EngineAbstraction::EventListener &listener;
    };
}

#endif
