#include "Character.h"

namespace HoldTheCoyote::Models {

    Character::Character() : Node(EngineAbstraction::EngineFactory::getInstance().createVec2Zero()) {

    }

}
