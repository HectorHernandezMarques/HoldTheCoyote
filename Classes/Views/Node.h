#ifndef HOLDTHECOYOTE_VIEWS_NODE_H
#define HOLDTHECOYOTE_VIEWS_NODE_H

#include <cocos2d.h>
#include "../Models/Observers/NodeObserver.h"

namespace HoldTheCoyote::Models {
    class Node;
}

namespace HoldTheCoyote::Views {

    class Node : virtual public Models::Observers::NodeObserver {

    public:
        Node(Models::Node &node, cocos2d::Scene &scene);
        ~Node() = default;

        Node(Node const &rhs) = delete;
        Node &operator=(Node const &rhs) = delete;

        Node(Node &&rhs) noexcept = delete;
        Node &operator=(Node &&rhs) noexcept = delete;

        void spawn();
        void unspawn();
        void update(Models::Aspects::Node::Aspect &aspect);

        cocos2d::Sprite &getNodeSprite();

        void setPosition(cocos2d::Vec2 position);
        void setRotation(float rotation);
        void setAnchorPoint(cocos2d::Vec2 anchorPoint);
        void setTexture(std::string texture);
        void setPhysic(cocos2d::PhysicsBody &physicBody);
        cocos2d::Vec2 getCurrentPosition();
        cocos2d::Size getContentSize();
        cocos2d::Scene &getScene();
        void runAction(cocos2d::Action *action);
        void stopAction(cocos2d::Action *action);
        void addEventListenerWithSceneGraphPriority(cocos2d::EventListener *listener);

    private:
        cocos2d::Sprite &nodeSprite;
        cocos2d::Scene &scene;

    };

}

#endif