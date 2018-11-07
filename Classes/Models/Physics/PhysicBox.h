#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICBOX_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICBOX_H

#include "Physic.h"
#include <Size.h>

namespace HoldTheCoyote::Models::Physics {

    class PhysicBox : public Physic {
    public:
        PhysicBox(int bitmask, EngineAbstraction::Size size);
        ~PhysicBox() override = default;

        PhysicBox(PhysicBox const &rhs) = delete;
        PhysicBox &operator=(PhysicBox const &rhs) = delete;

        PhysicBox(PhysicBox &&rhs) noexcept = delete;
        PhysicBox &operator=(PhysicBox &&rhs) noexcept = delete;

    protected:
        EngineAbstraction::PhysicsBody &init(int bitmask, EngineAbstraction::Size &size);

    };
}

#endif
