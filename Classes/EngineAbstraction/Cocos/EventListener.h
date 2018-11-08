#ifndef ENGINEABSTRACTION_COCOS_EVENTLISTENER_H
#define ENGINEABSTRACTION_COCOS_EVENTLISTENER_H

#include "../Interfaces/EventListener.h"
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class EventListener : public EngineAbstraction::EventListener {

    public:
        EventListener(cocos2d::EventListener &eventListener);
        virtual ~EventListener();

        EventListener(EventListener const &rhs) = delete;
        EventListener &operator=(EventListener const &rhs) = delete;

        EventListener(EventListener &&rhs) noexcept = delete;
        EventListener &operator=(EventListener &&rhs) noexcept = delete;

        cocos2d::EventListener &getEventListener();

    private:
        cocos2d::EventListener &eventListener;
    };

}

#endif
