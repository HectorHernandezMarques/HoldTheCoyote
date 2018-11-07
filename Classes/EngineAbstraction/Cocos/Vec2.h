#ifndef ENGINEABSTRACTION_COCOS_VEC2_H
#define ENGINEABSTRACTION_COCOS_VEC2_H

#include <Interfaces/Vec2.h>
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {
    class Vec2 : public EngineAbstraction::Vec2 {
    public:
        Vec2(cocos2d::Vec2 vec2);
        virtual ~Vec2() = default;

        Vec2(Vec2 const &rhs) = delete;
        Vec2 &operator=(Vec2 const &rhs);

        Vec2(Vec2 &&rhs) noexcept = delete;
        Vec2 &operator=(Vec2 &&rhs) noexcept;

        cocos2d::Vec2 getVec2() const;

    private:
        cocos2d::Vec2 vec2;

    };

}
#endif
