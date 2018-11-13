#ifndef ENGINEABSTRACTION_TEST_NODE_H
#define ENGINEABSTRACTION_TEST_NODE_H

#include "../Interfaces/Node.h"

namespace EngineAbstraction::Test {

    class Node : public EngineAbstraction::Node {

    public:
        Node() = default;
        virtual ~Node() = default;

        Node(Node const &rhs) = delete;
        Node &operator=(Node const &rhs) = delete;

        Node(Node &&rhs) noexcept = delete;
        Node &operator=(Node &&rhs) noexcept = delete;

    };

}

#endif
