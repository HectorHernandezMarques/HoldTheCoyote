#ifndef HOLDTHECOYOTE_MODELS_NODE_H
#define HOLDTHECOYOTE_MODELS_NODE_H

#include <cocos2d.h>

#include "Observers/NodeObserver.h"
#include "Aspects/Node/AddEventListenerWithSceneGraphPriorityAspect.h"
#include "Aspects/Node/PhysicAspect.h"
#include "Aspects/Node/PositionAspect.h"
#include "Aspects/Node/AnchorPointAspect.h"
#include "Aspects/Node/RotationAspect.h"
#include "Aspects/Node/RunActionAspect.h"
#include "Aspects/Node/StopActionAspect.h"
#include "Aspects/Node/TextureAspect.h"
#include "Physics/Physic.h"
#include "Physics/PhysicEmpty.h"

namespace HoldTheCoyote::Models {

    class Node {

    public:
        Node(cocos2d::Vec2 position, cocos2d::Vec2 anchorPoint = cocos2d::Vec2::ANCHOR_MIDDLE,
             std::string texture = "", float rotation = 0.0,
             Physics::Physic *physic = new Physics::PhysicEmpty());
        virtual ~Node() = default;

        Node(Node const &rhs) = delete;
        Node &operator=(Node const &rhs) = delete;

        Node(Node &&rhs) noexcept = delete;
        Node &operator=(Node &&rhs) noexcept = delete;

        void attach(Models::Observers::NodeObserver &nodeObserver);
        void notify(Aspects::Node::Aspect &aspect);
        bool hasPhysic();
        void runAction(cocos2d::Action *action);
        void stopAction(cocos2d::Action *action);
        void addEventListenerWithSceneGraphPriority(cocos2d::EventListener &listener);

        cocos2d::Vec2 getInitialPosition();
        cocos2d::Vec2 getPosition();
        cocos2d::Size getContentSize();
        cocos2d::Vec2 getAnchorPoint();
        std::string getTexture();
        float getRotation();
        Physics::Physic &getPhysic();
        EngineAbstraction::PhysicsBody &getPhysicBody();
        EngineAbstraction::Vec2 getVelocity();
        cocos2d::Scene &getScene();
        void setPosition(cocos2d::Vec2 position);
        void setAnchorPoint(cocos2d::Vec2 anchorPoint);
        void setTexture(std::string texture);
        void setRotation(float rotation);
        void setPhysic(Physics::Physic &physic);
        void setDynamic(bool dynamic);
        void setCategoryBitmask(int bitmask);
        void setCollisionBitmask(int bitmask);
        void setContactTestBitmask(int bitmask);
        void setVelocity(EngineAbstraction::Vec2 velocity);
        void setVelocityLimit(float velocity);

    private:
        cocos2d::Vec2 position;
        cocos2d::Vec2 anchorPoint;
        std::string texture;
        float rotation;
        Models::Observers::NodeObserver *nodeObserver;
        Physics::Physic *physic;

    };

}

#endif
