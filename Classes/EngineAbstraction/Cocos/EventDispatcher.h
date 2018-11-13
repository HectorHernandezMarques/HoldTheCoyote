#ifndef ENGINEABSTRACTION_COCOS_EVENTDISPATCHER_H
#define ENGINEABSTRACTION_COCOS_EVENTDISPATCHER_H

#include "../Interfaces/EventDispatcher.h"
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class EventDispatcher : public EngineAbstraction::EventDispatcher {

    public:
        EventDispatcher(cocos2d::EventDispatcher &eventDispatcher);
        virtual ~EventDispatcher() = default;

        EventDispatcher(EventDispatcher const &rhs) = delete;
        EventDispatcher &operator=(EventDispatcher const &rhs) = delete;

        EventDispatcher(EventDispatcher &&rhs) noexcept = delete;
        EventDispatcher &operator=(EventDispatcher &&rhs) noexcept = delete;

        void addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &eventListener,
                                                    EngineAbstraction::Node &node) override;

    private:
        cocos2d::EventDispatcher &eventDispatcher;

    };

}

#endif
