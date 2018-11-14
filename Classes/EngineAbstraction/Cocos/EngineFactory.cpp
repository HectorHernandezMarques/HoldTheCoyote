#include "EngineFactory.h"

#include "PhysicsBody.h"
#include "Scene.h"
#include "Size.h"
#include "Sprite.h"
#include "Vec2.h"

namespace EngineAbstraction::Cocos {

    EngineAbstraction::PhysicsBody &EngineFactory::createPhysicsBody() {
        return *new Cocos::PhysicsBody(*cocos2d::PhysicsBody::create());
    }

    EngineAbstraction::PhysicsBody &EngineFactory::createPhysicsBodyBox(EngineAbstraction::Size &size) {
        return *new Cocos::PhysicsBody(*cocos2d::PhysicsBody::createBox(static_cast<Size &>(size).getSize()));
    }

    EngineAbstraction::PhysicsBody &
    EngineFactory::createPhysicsBodyPolygon(const EngineAbstraction::Vec2 **points, int count) {
        cocos2d::Vec2 *cocosPoints = new cocos2d::Vec2[count];
        for (int i = 0; i < count; ++i) {
            cocosPoints[i] = static_cast<const Vec2 *>(points[i])->getVec2();
        }
        return *new Cocos::PhysicsBody(*cocos2d::PhysicsBody::createPolygon(cocosPoints, count));
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2() {
        return *new Cocos::Vec2(cocos2d::Vec2());
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2Zero() {
        return *new Cocos::Vec2(cocos2d::Vec2::ZERO);
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2AnchorMiddle() {
        return *new Cocos::Vec2(cocos2d::Vec2::ANCHOR_MIDDLE);
    }

    EngineAbstraction::Sprite &EngineFactory::createSprite() {
        return *new Sprite(*cocos2d::Sprite::create());
    }

    EngineAbstraction::Sprite &EngineFactory::createSprite(std::string filename) {
        return *new Sprite(*cocos2d::Sprite::create(filename));
    }

    EngineAbstraction::Scene &EngineFactory::createScene(cocos2d::Scene &scene) {
        return *new Cocos::Scene(scene);
    }
}