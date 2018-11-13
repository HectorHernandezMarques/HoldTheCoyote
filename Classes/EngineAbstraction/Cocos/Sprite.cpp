#include "Sprite.h"
#include "Action.h"
#include "EventDispatcher.h"
#include "PhysicsBody.h"
#include "Size.h"
#include "Vec2.h"

namespace EngineAbstraction::Cocos {

    Sprite::Sprite(cocos2d::Sprite &sprite) : Cocos::Node(sprite), sprite(sprite) {

    }

    void Sprite::setPosition(const EngineAbstraction::Vec2 &position) {
        this->sprite.setPosition(static_cast<const Vec2 &>(position).getVec2());
    }

    void Sprite::setAnchorPoint(const EngineAbstraction::Vec2 &anchorPoint) {
        this->sprite.setAnchorPoint(static_cast<const Vec2 &>(anchorPoint).getVec2());

    }

    void Sprite::setRotation(float rotation) {
        this->sprite.setRotation(rotation);
    }

    void Sprite::setTexture(const std::string &filename) {
        this->sprite.setTexture(filename);
    }

    const EngineAbstraction::Vec2 &Sprite::getPosition() const {
        return *new Cocos::Vec2(this->sprite.getPosition());
    }

    const EngineAbstraction::Size &Sprite::getContentSize() const {
        return *new Cocos::Size(this->sprite.getContentSize());
    }

    EngineAbstraction::EventDispatcher &Sprite::getEventDispatcher() const {
        return *new Cocos::EventDispatcher(*this->sprite.getEventDispatcher());
    }

    void Sprite::setPhysicsBody(EngineAbstraction::PhysicsBody &physicsBody) {
        return this->sprite.setPhysicsBody(&static_cast<PhysicsBody &>(physicsBody).getPhysicsBody());
    }

    void Sprite::runAction(EngineAbstraction::Action &action) {
        this->sprite.runAction(&static_cast<Action &>(action).getAction());
    }

    void Sprite::stopAction(EngineAbstraction::Action &action) {
        this->sprite.stopAction(&static_cast<Action &>(action).getAction());
    }

    cocos2d::Sprite &Sprite::getSprite() {
        return this->sprite;
    }
}