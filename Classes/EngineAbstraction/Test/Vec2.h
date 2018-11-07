#ifndef ENGINEABSTRACTION_TEST_VEC2_H
#define ENGINEABSTRACTION_TEST_VEC2_H

#include <Interfaces/Vec2.h>

namespace EngineAbstraction::Test {
    class Vec2 : public EngineAbstraction::Vec2 {
    public:
        Vec2() = default;
        virtual ~Vec2() = default;

        Vec2(Vec2 const &rhs) = delete;
        Vec2 &operator=(Vec2 const &rhs) = delete;

        Vec2(Vec2 &&rhs) noexcept = delete;
        Vec2 &operator=(Vec2 &&rhs) noexcept = delete;

    };

}
#endif
