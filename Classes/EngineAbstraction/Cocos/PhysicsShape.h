#ifndef ENGINEABSTRACTION_COCOS_PHYSICSSHAPE_H
#define ENGINEABSTRACTION_COCOS_PHYSICSSHAPE_H

#include <Interfaces/PhysicsShape.h>
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class PhysicsShape : public EngineAbstraction::PhysicsShape {

    public:
        PhysicsShape(cocos2d::PhysicsShape &physicsShape);
        virtual ~PhysicsShape() = default;

        PhysicsShape(PhysicsShape const &rhs) = delete;
        PhysicsShape &operator=(PhysicsShape const &rhs) = delete;

        PhysicsShape(PhysicsShape &&rhs) noexcept = delete;
        PhysicsShape &operator=(PhysicsShape &&rhs) noexcept = delete;

        void setFriction(float friction) override;

    private:
        cocos2d::PhysicsShape &physicsShape;
    };

}

#endif
