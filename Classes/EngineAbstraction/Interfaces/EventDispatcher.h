#ifndef ENGINEABSTRACTION_EVENTDISPATCHER_H
#define ENGINEABSTRACTION_EVENTDISPATCHER_H

#include "EventListener.h"
#include "Node.h"

namespace EngineAbstraction {
    class EventDispatcher {
    public:
        virtual void addEventListenerWithSceneGraphPriority(EventListener &eventListener, Node &node) = 0;
    };
}

#endif