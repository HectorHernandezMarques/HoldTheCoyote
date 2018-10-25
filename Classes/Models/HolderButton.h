#ifndef HOLDTHECOYOTE_MODELS_HOLDERBUTTON_H
#define HOLDTHECOYOTE_MODELS_HOLDERBUTTON_H

namespace HoldTheCoyote { namespace Models {

    class HolderButton {

    public:
        HolderButton() = default;

        ~HolderButton() = default;

        HolderButton(HolderButton const &rhs) = delete;

        HolderButton &operator=(HolderButton const &rhs) = delete;

        HolderButton(HolderButton &&rhs) noexcept = delete;

        HolderButton &operator=(HolderButton &&rhs) noexcept = delete;

    private:

    };

}}

#endif
