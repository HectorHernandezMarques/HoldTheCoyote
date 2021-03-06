#ifndef HOLDTHECOYOTE_MODELS_NODE_H
#define HOLDTHECOYOTE_MODELS_NODE_H

#include "../EngineAbstraction/Interfaces/EngineFactory.h"
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
        Node(EngineAbstraction::Vec2 &position,
             EngineAbstraction::Vec2 &anchorPoint = EngineAbstraction::EngineFactory::getInstance().createVec2AnchorMiddle(),
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
        void runAction(EngineAbstraction::Action *action);
        void stopAction(EngineAbstraction::Action *action);
        void addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &listener);

        EngineAbstraction::Vec2 &getInitialPosition();
        EngineAbstraction::Vec2 getPosition();
        EngineAbstraction::Size getContentSize();
        EngineAbstraction::Vec2 &getAnchorPoint();
        std::string getTexture();
        float getRotation();
        Physics::Physic &getPhysic();
        EngineAbstraction::PhysicsBody &getPhysicBody();
        EngineAbstraction::Vec2 &getVelocity();
        EngineAbstraction::Scene &getScene();
        void setPosition(EngineAbstraction::Vec2 &position);
        void setAnchorPoint(EngineAbstraction::Vec2 &anchorPoint);
        void setTexture(std::string texture);
        void setRotation(float rotation);
        void setPhysic(Physics::Physic &physic);
        void setDynamic(bool dynamic);
        void setCategoryBitmask(int bitmask);
        void setCollisionBitmask(int bitmask);
        void setContactTestBitmask(int bitmask);
        void setVelocity(EngineAbstraction::Vec2 &velocity);
        void setVelocityLimit(float velocity);

    private:
        EngineAbstraction::Vec2 &position;
        EngineAbstraction::Vec2 &anchorPoint;
        std::string texture;
        float rotation;
        Models::Observers::NodeObserver *nodeObserver;
        Physics::Physic *physic;

    };

}

#endif
