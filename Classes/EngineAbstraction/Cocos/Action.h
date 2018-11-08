#ifndef ENGINEABSTRACTION_COCOS_ACTION_H
#define ENGINEABSTRACTION_COCOS_ACTION_H

#include "../Interfaces/Action.h"
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class Action : public EngineAbstraction::Action {

    public:
        Action(cocos2d::Action &action);
        virtual ~Action();

        Action(Action const &rhs) = delete;
        Action &operator=(Action const &rhs) = delete;

        Action(Action &&rhs) noexcept = delete;
        Action &operator=(Action &&rhs) noexcept = delete;

        cocos2d::Action &getAction();

    private:
        cocos2d::Action &action;

    };

}

#endif
