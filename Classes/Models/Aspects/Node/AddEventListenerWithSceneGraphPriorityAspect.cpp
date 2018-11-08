#include "AddEventListenerWithSceneGraphPriorityAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    AddEventListenerWithSceneGraphPriorityAspect::AddEventListenerWithSceneGraphPriorityAspect(
            EngineAbstraction::EventListener &listener) : listener(listener) {

    }

    void AddEventListenerWithSceneGraphPriorityAspect::visit(Views::Node &node) {
        node.addEventListenerWithSceneGraphPriority(this->listener);
    }
}