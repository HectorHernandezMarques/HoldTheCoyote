#ifndef ENGINEABSTRACTION_TEST_EVENTLISTENER_H
#define ENGINEABSTRACTION_TEST_EVENTLISTENER_H

#include "../Interfaces/EventListener.h"

namespace EngineAbstraction::Test {

    class EventListener : public EngineAbstraction::EventListener {

    public:
        EventListener() = default;
        virtual ~EventListener() = default;

        EventListener(EventListener const &rhs) = delete;
        EventListener &operator=(EventListener const &rhs) = delete;

        EventListener(EventListener &&rhs) noexcept = delete;
        EventListener &operator=(EventListener &&rhs) noexcept = delete;

    };

}

#endif
