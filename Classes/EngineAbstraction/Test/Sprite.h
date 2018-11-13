#ifndef ENGINEABSTRACTION_TEST_SPRITE_H
#define ENGINEABSTRACTION_TEST_SPRITE_H

#include "../Interfaces/Sprite.h"

namespace EngineAbstraction::Test {

    class Sprite : public EngineAbstraction::Sprite {

    public:
        Sprite() = default;
        virtual ~Sprite() = default;

        Sprite(Sprite const &rhs) = delete;
        Sprite &operator=(Sprite const &rhs) = delete;

        Sprite(Sprite &&rhs) noexcept = delete;
        Sprite &operator=(Sprite &&rhs) noexcept = delete;

    private:

    };

}

#endif
