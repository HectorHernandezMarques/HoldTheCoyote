#ifndef HOLDTHECOYOTE_VIEWS_CHARACTER_H
#define HOLDTHECOYOTE_VIEWS_CHARACTER_H

#include "Node.h"

namespace HoldTheCoyote::Views {

    class Character : public Node {

    public:
        Character(Models::Node &node, EngineAbstraction::Scene &scene);
        ~Character() override = default;

        Character(Character const &rhs) = delete;
        Character &operator=(Character const &rhs) = delete;

        Character(Character &&rhs) noexcept = delete;
        Character &operator=(Character &&rhs) noexcept = delete;

    private:

    };

}

#endif
