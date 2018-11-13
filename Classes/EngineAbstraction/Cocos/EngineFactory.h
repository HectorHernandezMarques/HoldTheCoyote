#ifndef ENGINEABSTRACTION_COCOS_ENGINEFACTORY_H
#define ENGINEABSTRACTION_COCOS_ENGINEFACTORY_H

#include "../Interfaces/EngineFactory.h"

namespace cocos2d {
    class Scene;
}

namespace EngineAbstraction::Cocos {

    class EngineFactory : public EngineAbstraction::EngineFactory {

    public:
        EngineFactory() = default;
        virtual ~EngineFactory() = default;

        EngineFactory(EngineFactory const &rhs) = delete;
        EngineFactory &operator=(EngineFactory const &rhs) = delete;

        PhysicsBody &createPhysicsBody() override;
        PhysicsBody &createPhysicsBodyBox(Size &size) override;
        PhysicsBody &createPhysicsBodyPolygon(const Vec2 **points, int count) override;

        Vec2 &createVec2() override;
        Vec2 &createVec2Zero() override;
        Vec2 &createVec2AnchorMiddle() override;
        Sprite &createSprite() override;
        Sprite &createSprite(std::string filename) override;

        Scene &createScene(cocos2d::Scene &scene);

    private:

    };

}

#endif
