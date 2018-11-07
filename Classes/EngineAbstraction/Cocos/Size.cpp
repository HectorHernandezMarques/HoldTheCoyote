#include "Size.h"

namespace EngineAbstraction::Cocos {

    Size::Size(cocos2d::Size &size) : size(size) {

    }

    cocos2d::Size Size::getSize() {
        return cocos2d::Size();
    }

    Size::~Size() {
        delete &this->size;
    }
}