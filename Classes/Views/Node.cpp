#include "Node.h"
#include <Models/Node.h>
#include <cassert>

namespace HoldTheCoyote::Views {
    Node::Node(Models::Node &node, EngineAbstraction::Scene &scene) :
            nodeSprite(node.getTexture().empty() ? EngineAbstraction::EngineFactory::getInstance().createSprite()
                                                 : EngineAbstraction::EngineFactory::getInstance().createSprite(
                            node.getTexture())
            ),
            scene(scene) {
        assert(&node);
        assert(&scene);

        node.attach(*this);
        this->nodeSprite.setAnchorPoint(node.getAnchorPoint());
        this->nodeSprite.setPosition(node.getInitialPosition());
        if (node.hasPhysic()) {
            this->nodeSprite.setPhysicsBody(node.getPhysicBody());
        }
    }

    void Node::spawn() {
        this->scene.addChild(this->nodeSprite);
    }

    void Node::unspawn() {
        this->scene.removeChild(this->nodeSprite);
    }

    void Node::update(Models::Aspects::Node::Aspect &aspect) {
        aspect.visit(*this);
    }

    EngineAbstraction::Sprite &Node::getNodeSprite() {
        return this->nodeSprite;
    }

    void Node::setPosition(EngineAbstraction::Vec2 &position) {
        this->nodeSprite.setPosition(position);
    }

    void Node::setAnchorPoint(EngineAbstraction::Vec2 &anchorPoint) {
        this->nodeSprite.setAnchorPoint(anchorPoint);
    }

    void Node::setRotation(float rotation) {
        this->nodeSprite.setRotation(rotation);
    }

    void Node::setTexture(std::string texture) {
        this->nodeSprite.setTexture(texture);
    }

    void Node::setPhysic(EngineAbstraction::PhysicsBody &physicsBody) {
        this->nodeSprite.setPhysicsBody(physicsBody);
    }

    const EngineAbstraction::Vec2 &Node::getCurrentPosition() const {
        return this->nodeSprite.getPosition();
    }

    const EngineAbstraction::Size &Node::getContentSize() const {
        return this->nodeSprite.getContentSize();
    }

    EngineAbstraction::Scene &Node::getScene() {
        return this->scene;
    }

    void Node::runAction(EngineAbstraction::Action &action) {
        this->nodeSprite.runAction(action);
    }

    void Node::stopAction(EngineAbstraction::Action &action) {
        this->nodeSprite.stopAction(action);
    }

    void Node::addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &listener) {
        this->nodeSprite.getEventDispatcher().addEventListenerWithSceneGraphPriority(
                listener,
                this->nodeSprite);
    }

}