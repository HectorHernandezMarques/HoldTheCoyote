#include "Node.h"
#include <cocos2d.h>
#include <Models/Node.h>
#include <EngineAbstraction/Cocos/PhysicsBody.h>
#include <EngineAbstraction/Cocos/EventListener.h>
#include <EngineAbstraction/Cocos/Vec2.h>
#include <EngineAbstraction/Cocos/Action.h>

namespace HoldTheCoyote::Views {
    Node::Node(Models::Node &node, cocos2d::Scene &scene) :
            nodeSprite(node.getTexture().empty() ? *cocos2d::Sprite::create()
                                                 : *cocos2d::Sprite::create(node.getTexture())
            ),
            scene(scene) {
        assert(&node);
        assert(&scene);

        node.attach(*this);
        this->nodeSprite.setAnchorPoint(static_cast<EngineAbstraction::Cocos::Vec2 &>(node.getAnchorPoint()).getVec2());
        this->nodeSprite.setPosition(
                static_cast<EngineAbstraction::Cocos::Vec2 &>(node.getInitialPosition()).getVec2());
        if (node.hasPhysic()) {
            this->nodeSprite.setPhysicsBody(
                    &static_cast<EngineAbstraction::Cocos::PhysicsBody &>(node.getPhysicBody()).getPhysicsBody());
        }
    }

    void Node::spawn() {
        this->scene.addChild(&this->nodeSprite);
    }

    void Node::unspawn() {
        this->scene.removeChild(&this->nodeSprite);
    }

    void Node::update(Models::Aspects::Node::Aspect &aspect) {
        aspect.visit(*this);
    }

    cocos2d::Sprite &Node::getNodeSprite() {
        return this->nodeSprite;
    }

    void Node::setPosition(EngineAbstraction::Vec2 &position) {
        this->nodeSprite.setPosition(static_cast<EngineAbstraction::Cocos::Vec2 &>(position).getVec2());
    }

    void Node::setAnchorPoint(EngineAbstraction::Vec2 &anchorPoint) {
        this->nodeSprite.setAnchorPoint(static_cast<EngineAbstraction::Cocos::Vec2 &>(anchorPoint).getVec2());
    }

    void Node::setRotation(float rotation) {
        this->nodeSprite.setRotation(rotation);
    }

    void Node::setTexture(std::string texture) {
        this->nodeSprite.setTexture(texture);
    }

    void Node::setPhysic(EngineAbstraction::PhysicsBody &physicBody) {
        this->nodeSprite.setPhysicsBody(
                &static_cast<EngineAbstraction::Cocos::PhysicsBody &>(physicBody).getPhysicsBody());
    }

    cocos2d::Vec2 Node::getCurrentPosition() {
        return this->nodeSprite.getPosition();
    }

    cocos2d::Size Node::getContentSize() {
        return this->nodeSprite.getContentSize();
    }

    cocos2d::Scene &Node::getScene() {
        return this->scene;
    }

    void Node::runAction(EngineAbstraction::Action &action) {
        this->nodeSprite.runAction(&static_cast<EngineAbstraction::Cocos::Action &>(action).getAction());
    }

    void Node::stopAction(EngineAbstraction::Action &action) {
        this->nodeSprite.stopAction(&static_cast<EngineAbstraction::Cocos::Action &>(action).getAction());
    }

    void Node::addEventListenerWithSceneGraphPriority(EngineAbstraction::EventListener &listener) {
        this->nodeSprite.getEventDispatcher()->addEventListenerWithSceneGraphPriority(
                &static_cast<EngineAbstraction::Cocos::EventListener &>(listener).getEventListener(),
                &this->nodeSprite);
    }

}