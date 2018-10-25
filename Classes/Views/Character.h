#ifndef HOLDTHECOYOTE_VIEWS_CHARACTER_H
#define HOLDTHECOYOTE_VIEWS_CHARACTER_H

#include "Node.h"

namespace HoldTheCoyote { namespace Views {

    class Character : public Node {

    public:
        Character() = default;

        ~Character() = default;

        Character(Character const &rhs) = delete;

        Character &operator=(Character const &rhs) = delete;

        Character(Character &&rhs) noexcept = delete;

        Character &operator=(Character &&rhs) noexcept = delete;

    private:

    };

}}

#endif
