#include "Node.h"
#include <EngineFactory.h>

namespace HoldTheCoyote::Models {

    Node::Node(EngineAbstraction::Vec2 &position, EngineAbstraction::Vec2 &anchorPoint, std::string texture,
               float rotation,
               Physics::Physic *physic) :
            position(position), anchorPoint(anchorPoint), texture(std::move(texture)), rotation(rotation),
            nodeObserver(nullptr),
            physic(physic) {

    }

    void Node::attach(Models::Observers::NodeObserver &nodeObserver) {
        this->nodeObserver = &nodeObserver;
    }

    void Node::notify(Aspects::Node::Aspect &aspect) {
        if (this->nodeObserver) {
            this->nodeObserver->update(aspect);
        }
    }

    bool Node::hasPhysic() {
        return this->physic != nullptr;
    }

    void Node::stopAction(EngineAbstraction::Action *action) {
        if (action) {
            this->notify(*new Aspects::Node::StopActionAspect(*action));
        }
    }

    void Node::runAction(EngineAbstraction::Action *action) {
        this->notify(*(new Aspects::Node::RunActionAspect(*action)));
    }

    void Node::addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &listener) {
        assert(&listener);

        this->notify(*(new Aspects::Node::AddEventListenerWithSceneGraphPriorityAspect(listener)));
    }

    EngineAbstraction::Vec2 &Node::getInitialPosition() {
        return this->position;
    }

    cocos2d::Vec2 Node::getPosition() {
        assert(this->nodeObserver);

        return this->nodeObserver->getCurrentPosition();
    }

    cocos2d::Size Node::getContentSize() {
        assert(this->nodeObserver);

        return this->nodeObserver->getContentSize();
    }

    EngineAbstraction::Vec2 &Node::getAnchorPoint() {
        return this->anchorPoint;
    }

    std::string Node::getTexture() {
        return this->texture;
    }

    float Node::getRotation() {
        return this->rotation;
    }

    Physics::Physic &Node::getPhysic() {
        assert(this->physic);

        return *this->physic;
    }

    EngineAbstraction::PhysicsBody &Node::getPhysicBody() {
        assert(this->physic);

        return this->physic->getPhysic();
    }

    EngineAbstraction::Vec2 &Node::getVelocity() {
        assert(this->physic);

        return this->physic->getVelocity();
    }

    cocos2d::Scene &Node::getScene() {
        return this->nodeObserver->getScene();
    }

    void Node::setPosition(EngineAbstraction::Vec2 &position) {
        this->position = position;
        this->notify(*(new Aspects::Node::PositionAspect(this->position)));
    }

    void Node::setAnchorPoint(EngineAbstraction::Vec2 &anchorPoint) {
        this->anchorPoint = anchorPoint;
        this->notify(*(new Aspects::Node::AnchorPointAspect(this->anchorPoint)));
    }

    void Node::setTexture(std::string texture) {
        this->texture = std::move(texture);
        this->notify(*(new Aspects::Node::TextureAspect(this->texture)));
    }

    void Node::setRotation(float rotation) {
        this->rotation = rotation;
        this->notify(*(new Aspects::Node::RotationAspect(this->rotation)));
    }

    void Node::setPhysic(Physics::Physic &physic) {
        this->physic = &physic;
        this->notify(*(new Aspects::Node::PhysicAspect(this->physic->getPhysic())));
    }

    void Node::setDynamic(bool dynamic) {
        assert(this->physic);

        this->physic->setDynamic(dynamic);
        this->notify(*(new Aspects::Node::PhysicAspect(this->physic->getPhysic())));
    }

    void Node::setCategoryBitmask(int bitmask) {
        assert(this->physic);

        this->physic->setCategoryBitmask(bitmask);
        this->notify(*(new Aspects::Node::PhysicAspect(this->physic->getPhysic())));
    }

    void Node::setCollisionBitmask(int bitmask) {
        assert(this->physic);

        this->physic->setCollisionBitmask(bitmask);
        this->notify(*(new Aspects::Node::PhysicAspect(this->physic->getPhysic())));
    }

    void Node::setContactTestBitmask(int bitmask) {
        assert(this->physic);

        this->physic->setContactTestBitmask(bitmask);
        this->notify(*(new Aspects::Node::PhysicAspect(this->physic->getPhysic())));
    }

    void Node::setVelocity(EngineAbstraction::Vec2 &velocity) {
        assert(&velocity);

        this->physic->setVelocity(velocity);
    }

    void Node::setVelocityLimit(float velocity) {
        assert(&velocity);

        this->physic->setVelocityLimit(velocity);
    }

}
