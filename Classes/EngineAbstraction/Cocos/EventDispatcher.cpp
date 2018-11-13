#include "EventDispatcher.h"

#include "EventListener.h"
#include "Node.h"

namespace EngineAbstraction::Cocos {

    EventDispatcher::EventDispatcher(cocos2d::EventDispatcher &eventDispatcher) : eventDispatcher(eventDispatcher) {

    }

    void EventDispatcher::addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &eventListener,
                                                                 EngineAbstraction::Node &node) {
        this->eventDispatcher.addEventListenerWithSceneGraphPriority(
                &static_cast<EventListener &>(eventListener).getEventListener(),
                &static_cast<Node &>(node).getNode()
        );
    }
}
