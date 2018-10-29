#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICPOLYGON_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICPOLYGON_H

#include <cocos2d.h>
#include "Physic.h"

namespace HoldTheCoyote::Models::Physics {

    class PhysicPolygon : public Physic {
    public:
        PhysicPolygon(int bitmask, std::list<cocos2d::Vec2> &points);
        ~PhysicPolygon() override = default;

        PhysicPolygon(PhysicPolygon const &rhs) = delete;
        PhysicPolygon &operator=(PhysicPolygon const &rhs) = delete;

        PhysicPolygon(PhysicPolygon &&rhs) noexcept = delete;
        PhysicPolygon &operator=(PhysicPolygon &&rhs) noexcept = delete;

    protected:
        cocos2d::PhysicsBody &init(int bitmask, std::list<cocos2d::Vec2> &points);

    };
}

#endif
