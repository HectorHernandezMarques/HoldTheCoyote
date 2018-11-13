#include "EngineFactory.h"
#include "PhysicsBody.h"
#include "Size.h"
#include "Vec2.h"

namespace EngineAbstraction::Test {

    EngineAbstraction::PhysicsBody &EngineFactory::createPhysicsBody() {
        return *new PhysicsBody();
    }

    EngineAbstraction::PhysicsBody &EngineFactory::createPhysicsBodyBox(EngineAbstraction::Size &size) {
        return *new PhysicsBody();
    }

    EngineAbstraction::PhysicsBody &
    EngineFactory::createPhysicsBodyPolygon(const EngineAbstraction::Vec2 **points, int count) {
        return *new PhysicsBody();
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2() {
        return *new Vec2();
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2Zero() {
        return *new Vec2();
    }

    EngineAbstraction::Vec2 &EngineFactory::createVec2AnchorMiddle() {
        return *new Vec2();
    }
}