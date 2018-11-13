#ifndef HOLDTHECOYOTE_VIEWS_NODE_H
#define HOLDTHECOYOTE_VIEWS_NODE_H

#include "../EngineAbstraction/Interfaces/EventListener.h"
#include "../EngineAbstraction/Interfaces/Vec2.h"
#include "../EngineAbstraction/Interfaces/Action.h"
#include "../EngineAbstraction/Interfaces/PhysicsBody.h"
#include "../EngineAbstraction/Interfaces/Size.h"
#include "../EngineAbstraction/Interfaces/Scene.h"
#include "../EngineAbstraction/Interfaces/Sprite.h"
#include "../Models/Observers/NodeObserver.h"

namespace HoldTheCoyote::Models {
    class Node;
}

namespace HoldTheCoyote::Views {

    class Node : virtual public Models::Observers::NodeObserver {

    public:
        Node(Models::Node &node, EngineAbstraction::Scene &scene);
        virtual ~Node() = default;

        Node(Node const &rhs) = delete;
        Node &operator=(Node const &rhs) = delete;

        Node(Node &&rhs) noexcept = delete;
        Node &operator=(Node &&rhs) noexcept = delete;

        void spawn();
        void unspawn();
        void update(Models::Aspects::Node::Aspect &aspect) override;

        EngineAbstraction::Sprite &getNodeSprite();

        void setPosition(EngineAbstraction::Vec2 &position);
        void setRotation(float rotation);
        void setAnchorPoint(EngineAbstraction::Vec2 &anchorPoint);
        void setTexture(std::string texture);
        void setPhysic(EngineAbstraction::PhysicsBody &physicsBody);
        const EngineAbstraction::Vec2 &getCurrentPosition() const override;
        const EngineAbstraction::Size &getContentSize() const override;
        EngineAbstraction::Scene &getScene() override;
        void runAction(EngineAbstraction::Action &action);
        void stopAction(EngineAbstraction::Action &action);
        void addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &listener);

    private:
        EngineAbstraction::Sprite &nodeSprite;
        EngineAbstraction::Scene &scene;

    };

}

#endif