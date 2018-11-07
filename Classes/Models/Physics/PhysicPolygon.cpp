#include <EngineFactory.h>
#include "PhysicPolygon.h"
#include "../../EngineAbstraction/Cocos/EngineFactory.h"

namespace HoldTheCoyote::Models::Physics {

    PhysicPolygon::PhysicPolygon(int bitmask, std::list<EngineAbstraction::Vec2 *> &points) : Physic(
            this->init(bitmask, points)) {
    }

    EngineAbstraction::PhysicsBody &PhysicPolygon::init(int bitmask, std::list<EngineAbstraction::Vec2 *> &points) {
        const EngineAbstraction::Vec2 **pointsArray = new const EngineAbstraction::Vec2 *[points.size()];
        int i = 0;
        for (auto *point : points) {
            pointsArray[i++] = point;
        }
        EngineAbstraction::PhysicsBody &result = EngineAbstraction::EngineFactory::getInstance().createPhysicsBodyPolygon(
                pointsArray, points.size());
        result.setCollisionBitmask(bitmask);
        return result;
    }
}