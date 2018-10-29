#ifndef HOLDTHECOYOTE_MODELS_HOLDERBUTTON_H
#define HOLDTHECOYOTE_MODELS_HOLDERBUTTON_H

#include "Node.h"

namespace HoldTheCoyote::Models {

    class HolderButton : public Node {

    public:
        HolderButton();
        ~HolderButton() override = default;

        HolderButton(HolderButton const &rhs) = delete;
        HolderButton &operator=(HolderButton const &rhs) = delete;

        HolderButton(HolderButton &&rhs) noexcept = delete;
        HolderButton &operator=(HolderButton &&rhs) noexcept = delete;

    private:

    };

}

#endif
