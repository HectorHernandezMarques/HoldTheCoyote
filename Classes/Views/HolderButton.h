#ifndef HOLDTHECOYOTE_VIEWS_HOLDERBUTTON_H
#define HOLDTHECOYOTE_VIEWS_HOLDERBUTTON_H

#include "Node.h"

namespace HoldTheCoyote::Views {

    class HolderButton : public Node {

    public:
        HolderButton(Models::Node &node, cocos2d::Scene &scene);
        ~HolderButton() override = default;

        HolderButton(HolderButton const &rhs) = delete;
        HolderButton &operator=(HolderButton const &rhs) = delete;

        HolderButton(HolderButton &&rhs) noexcept = delete;
        HolderButton &operator=(HolderButton &&rhs) noexcept = delete;

    private:

    };

}

#endif
