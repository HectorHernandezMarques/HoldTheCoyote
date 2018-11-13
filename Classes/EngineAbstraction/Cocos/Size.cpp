#include "Size.h"

namespace EngineAbstraction::Cocos {

    Size::Size(const cocos2d::Size &size) : size(size) {

    }

    const cocos2d::Size &Size::getSize() const {
        return this->size;
    }
}