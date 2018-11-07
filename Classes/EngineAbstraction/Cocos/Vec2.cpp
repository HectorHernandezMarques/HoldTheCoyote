#include "Vec2.h"

namespace EngineAbstraction::Cocos {

    Vec2::Vec2(cocos2d::Vec2 vec2) : vec2(vec2) {

    }

    cocos2d::Vec2 Vec2::getVec2() const {
        return this->vec2;
    }

    Vec2 &Vec2::operator=(Vec2 const &rhs) {
        this->vec2 = rhs.vec2;
        return *this;
    }

    Vec2 &Vec2::operator=(Vec2 &&rhs) noexcept {
        this->vec2 = std::move(rhs.vec2);
        return *this;
    }
}
