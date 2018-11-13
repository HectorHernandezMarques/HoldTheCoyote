#ifndef ENGINEABSTRACTION_TEST_EVENTDISPATCHER_H
#define ENGINEABSTRACTION_TEST_EVENTDISPATCHER_H

#include "../Interfaces/EventDispatcher.h"

namespace EngineAbstraction::Test {

    class EventDispatcher : public EngineAbstraction::EventDispatcher {

    public:
        EventDispatcher() = default;
        virtual ~EventDispatcher() = default;

        EventDispatcher(EventDispatcher const &rhs) = delete;
        EventDispatcher &operator=(EventDispatcher const &rhs) = delete;

        EventDispatcher(EventDispatcher &&rhs) noexcept = delete;
        EventDispatcher &operator=(EventDispatcher &&rhs) noexcept = delete;

        void addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &eventListener,
                                                    EngineAbstraction::Node &node) override;

    };

}

#endif
