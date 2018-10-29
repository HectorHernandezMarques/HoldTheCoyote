#include "AddEventListenerWithSceneGraphPriorityAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    AddEventListenerWithSceneGraphPriorityAspect::AddEventListenerWithSceneGraphPriorityAspect(
            cocos2d::EventListener *listener) : listener(listener) {
        assert(listener);

    }

    void AddEventListenerWithSceneGraphPriorityAspect::visit(Views::Node &node) {
        node.addEventListenerWithSceneGraphPriority(this->listener);
    }
}