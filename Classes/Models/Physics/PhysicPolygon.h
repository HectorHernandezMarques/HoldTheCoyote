#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICPOLYGON_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICPOLYGON_H

#include "Physic.h"
#include <list>

namespace HoldTheCoyote::Models::Physics {

    class PhysicPolygon : public Physic {
    public:
        PhysicPolygon(int bitmask, std::list<EngineAbstraction::Vec2 *> &points);
        ~PhysicPolygon() override = default;

        PhysicPolygon(PhysicPolygon const &rhs) = delete;
        PhysicPolygon &operator=(PhysicPolygon const &rhs) = delete;

        PhysicPolygon(PhysicPolygon &&rhs) noexcept = delete;
        PhysicPolygon &operator=(PhysicPolygon &&rhs) noexcept = delete;

    protected:
        EngineAbstraction::PhysicsBody &init(int bitmask, std::list<EngineAbstraction::Vec2 *> &points);

    };
}

#endif
