#ifndef HOLDTHECOYOTE_VIEWS_NODE_H
#define HOLDTHECOYOTE_VIEWS_NODE_H

#include "../EngineAbstraction/Interfaces/EventListener.h"
#include "../EngineAbstraction/Interfaces/Vec2.h"
#include "../EngineAbstraction/Interfaces/Action.h"
#include "../EngineAbstraction/Interfaces/PhysicsBody.h"
#include "../Models/Observers/NodeObserver.h"

namespace HoldTheCoyote::Models {
    class Node;
}

namespace cocos2d {
    class Scene;

    class Sprite;

    class Vec2;

    class Size;
}

namespace HoldTheCoyote::Views {

    class Node : virtual public Models::Observers::NodeObserver {

    public:
        Node() = default;
        Node(Models::Node &node, cocos2d::Scene &scene);
        virtual ~Node() = default;

        Node(Node const &rhs) = delete;
        Node &operator=(Node const &rhs) = delete;

        Node(Node &&rhs) noexcept = delete;
        Node &operator=(Node &&rhs) noexcept = delete;

        void spawn();
        void unspawn();
        void update(Models::Aspects::Node::Aspect &aspect);

        cocos2d::Sprite &getNodeSprite();

        void setPosition(EngineAbstraction::Vec2 &position);
        void setRotation(float rotation);
        void setAnchorPoint(EngineAbstraction::Vec2 &anchorPoint);
        void setTexture(std::string texture);
        void setPhysic(EngineAbstraction::PhysicsBody &physicBody);
        cocos2d::Vec2 getCurrentPosition();
        cocos2d::Size getContentSize();
        cocos2d::Scene &getScene();
        void runAction(EngineAbstraction::Action &action);
        void stopAction(EngineAbstraction::Action &action);
        void addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &listener);

    private:
        cocos2d::Sprite &nodeSprite;
        cocos2d::Scene &scene;

    };

}

#endif