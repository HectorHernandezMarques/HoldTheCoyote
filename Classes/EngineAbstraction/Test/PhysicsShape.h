#ifndef ENGINEABSTRACTION_TEST_PHYSICSSHAPE_H
#define ENGINEABSTRACTION_TEST_PHYSICSSHAPE_H

#include <Interfaces/PhysicsShape.h>

namespace EngineAbstraction::Test {

    class PhysicsShape : public EngineAbstraction::PhysicsShape {

    public:
        PhysicsShape() = default;
        virtual ~PhysicsShape() = default;

        PhysicsShape(PhysicsShape const &rhs) = delete;
        PhysicsShape &operator=(PhysicsShape const &rhs) = delete;

        PhysicsShape(PhysicsShape &&rhs) noexcept = delete;
        PhysicsShape &operator=(PhysicsShape &&rhs) noexcept = delete;

        void setFriction(float friction) override;

    };

}

#endif
