#include "Action.h"

namespace EngineAbstraction::Cocos {

    Action::Action(cocos2d::Action &action) : action(action) {

    }

    Action::~Action() {
        delete &this->action;
    }

    cocos2d::Action &Action::getAction() {
        return this->action;
    }
}