#include "EngineFactory.h"
#include "PhysicsBody.h"
#include "Size.h"
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
        return *new Cocos::Vec2(*new cocos2d::Vec2());
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2Zero() {
        return *new Cocos::Vec2(cocos2d::Vec2::ZERO);
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2AnchorMiddle() {
        return *new Cocos::Vec2(cocos2d::Vec2::ANCHOR_MIDDLE);
    }
}