#include "EventListener.h"

namespace EngineAbstraction::Cocos {

    EventListener::EventListener(cocos2d::EventListener &eventListener) : eventListener(eventListener) {

    }

    EventListener::~EventListener() {
        delete &this->eventListener;
    }

    cocos2d::EventListener &EventListener::getEventListener() {
        return this->eventListener;
    }

}
