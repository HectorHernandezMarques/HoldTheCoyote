#ifndef HOLDTHECOYOTE_MODELS_CHARACTER_H
#define HOLDTHECOYOTE_MODELS_CHARACTER_H

#include "Node.h"

namespace HoldTheCoyote::Models {

    class Character : public Node {

    public:
        Character();
        ~Character() = default;

        Character(Character const &rhs) = delete;
        Character &operator=(Character const &rhs) = delete;

        Character(Character &&rhs) noexcept = delete;
        Character &operator=(Character &&rhs) noexcept = delete;

    private:


    };

}

#endif
