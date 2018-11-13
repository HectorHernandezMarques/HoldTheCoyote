#ifndef ENGINEABSTRACTION_COCOS_NODE_H
#define ENGINEABSTRACTION_COCOS_NODE_H

#include "../Interfaces/Node.h"
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class Node : public EngineAbstraction::Node {

    public:
        Node(cocos2d::Node &node);
        virtual ~Node() = default;

        Node(Node const &rhs) = delete;
        Node &operator=(Node const &rhs) = delete;

        Node(Node &&rhs) noexcept = delete;
        Node &operator=(Node &&rhs) noexcept = delete;

        cocos2d::Node &getNode() const;

    private:
        cocos2d::Node &node;
    };

}

#endif
