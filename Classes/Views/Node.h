#ifndef HOLDTHECOYOTE_VIEWS_NODE_H
#define HOLDTHECOYOTE_VIEWS_NODE_H

#include <cocos2d.h>

namespace HoldTheCoyote { namespace Views {

    class Node {

    public:
        Node() = default;

        ~Node() = default;

        Node(Node const &rhs) = delete;

        Node &operator=(Node const &rhs) = delete;

        Node(Node &&rhs) noexcept = delete;

        Node &operator=(Node &&rhs) noexcept = delete;

        void spawn(cocos2d::Scene &scene);

    };

}}

#endif
