#include "PhysicPolygon.h"

namespace HoldTheCoyote::Models::Physics {

    PhysicPolygon::PhysicPolygon(int bitmask, std::list<cocos2d::Vec2> &points) : Physic(this->init(bitmask, points)) {
    }

    cocos2d::PhysicsBody &PhysicPolygon::init(int bitmask, std::list<cocos2d::Vec2> &points) {
        //cocos2d::Vec2 pointsArray[points.size()];
        cocos2d::Vec2 *pointsArray = new cocos2d::Vec2[points.size()];
        int i = 0;
        for (const auto &point : points) {
            pointsArray[i++] = point;
        }
        cocos2d::PhysicsBody &result = *cocos2d::PhysicsBody::createPolygon(pointsArray, points.size());
        result.setCollisionBitmask(bitmask);
        return result;
    }
}