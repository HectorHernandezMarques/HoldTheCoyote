#ifndef ENGINEABSTRACTION_TEST_ACTION_H
#define ENGINEABSTRACTION_TEST_ACTION_H

#include "../Interfaces/Action.h"

namespace EngineAbstraction::Test {

    class Action : public EngineAbstraction::Action {

    public:
        Action() = default;
        virtual ~Action() = default;

        Action(Action const &rhs) = delete;
        Action &operator=(Action const &rhs) = delete;

        Action(Action &&rhs) noexcept = delete;
        Action &operator=(Action &&rhs) noexcept = delete;

    };

}

#endif
