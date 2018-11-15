#ifndef ENGINEABSTRACTION_COCOS_SPRITE_H
#define ENGINEABSTRACTION_COCOS_SPRITE_H

#include "../Interfaces/Sprite.h"
#include "Node.h"
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class Sprite : public EngineAbstraction::Sprite, public Node {

    public:
        Sprite(cocos2d::Sprite &sprite);
        ~Sprite() override = default;

        Sprite(Sprite const &rhs) = delete;
        Sprite &operator=(Sprite const &rhs) = delete;

        Sprite(Sprite &&rhs) noexcept = delete;
        Sprite &operator=(Sprite &&rhs) noexcept = delete;

        void setPosition(const Vec2 &position) override;
        void setAnchorPoint(const Vec2 &anchorPoint) override;
        void setRotation(float rotation) override;
        void setTexture(const std::string &filename) override;

        const Vec2 &getPosition() const override;
        const Size &getContentSize() const override;
        EngineAbstraction::EventDispatcher &getEventDispatcher() const override;

        void setPhysicsBody(EngineAbstraction::PhysicsBody &physicsBody) override;
        void runAction(EngineAbstraction::Action &action) override;
        void stopAction(EngineAbstraction::Action &action) override;

        cocos2d::Sprite &getSprite();

    private:
        cocos2d::Sprite &sprite;

    };

}

#endif
