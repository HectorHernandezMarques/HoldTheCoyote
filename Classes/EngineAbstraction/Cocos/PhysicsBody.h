#ifndef ENGINEABSTRACTION_COCOS_PHYSICSBODY_H
#define ENGINEABSTRACTION_COCOS_PHYSICSBODY_H

#include "../Interfaces/PhysicsBody.h"
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class PhysicsBody : public EngineAbstraction::PhysicsBody {

    public:
        PhysicsBody(cocos2d::PhysicsBody &physicsBody);
        virtual ~PhysicsBody() = default;

        PhysicsBody(PhysicsBody const &rhs) = delete;
        PhysicsBody &operator=(PhysicsBody const &rhs) = delete;

        PhysicsBody(PhysicsBody &&rhs) noexcept = delete;
        PhysicsBody &operator=(PhysicsBody &&rhs) noexcept = delete;

        EngineAbstraction::Vec2 &getVelocity() override;
        void setDynamic(bool dynamic) override;
        void setCategoryBitmask(int categoryBitmask) override;
        void setCollisionBitmask(int collisionBitmask) override;
        void setContactTestBitmask(int contactTestBitmask) override;
        void setRotationEnable(bool enable) override;
        void setVelocity(EngineAbstraction::Vec2 &velocity) override;
        void setVelocityLimit(float velocityLimit) override;
        std::vector<EngineAbstraction::PhysicsShape *> getShapes() const override;

        cocos2d::PhysicsBody &getPhysicsBody() { return this->physicsBody; }

    private:
        cocos2d::PhysicsBody &physicsBody;

    };

}

#endif
