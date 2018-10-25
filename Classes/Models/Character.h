#ifndef HOLDTHECOYOTE_MODELS_CHARACTER_H
#define HOLDTHECOYOTE_MODELS_CHARACTER_H

namespace HoldTheCoyote { namespace Models {

    class Character {

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
