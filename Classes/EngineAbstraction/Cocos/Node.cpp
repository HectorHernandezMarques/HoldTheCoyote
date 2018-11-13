#include "Node.h"

namespace EngineAbstraction::Cocos {

    Node::Node(cocos2d::Node &node) : node(node) {

    }

    cocos2d::Node &Node::getNode() const {
        return this->node;
    }
}
