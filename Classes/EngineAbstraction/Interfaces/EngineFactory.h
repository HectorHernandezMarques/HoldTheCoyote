#ifndef ENGINEABSTRACTION_ENGINEFACTORY_H
#define ENGINEABSTRACTION_ENGINEFACTORY_H

#include "PhysicsBody.h"
#include "Scene.h"
#include "Size.h"
#include "Sprite.h"

namespace EngineAbstraction {

    class EngineFactory {
    public:
        static EngineFactory &getInstance();
        virtual ~EngineFactory() = default;

        EngineFactory(EngineFactory const &rhs) = delete;
        virtual EngineFactory &operator=(EngineFactory const &rhs) = delete;

        EngineFactory(EngineFactory &&rhs) noexcept = delete;
        virtual EngineFactory &operator=(EngineFactory &&rhs) noexcept = delete;

        virtual PhysicsBody &createPhysicsBody() = 0;
        virtual PhysicsBody &createPhysicsBodyBox(Size &size) = 0;
        virtual PhysicsBody &createPhysicsBodyPolygon(const Vec2 **points, int count) = 0;

        virtual Vec2 &createVec2() = 0;
        virtual Vec2 &createVec2Zero() = 0;
        virtual Vec2 &createVec2AnchorMiddle() = 0;

        virtual Sprite &createSprite() = 0;
        virtual Sprite &createSprite(std::string filename) = 0;

    protected:
        EngineFactory() = default;

    private:
        static EngineFactory *instance;

    };

}

#endif
