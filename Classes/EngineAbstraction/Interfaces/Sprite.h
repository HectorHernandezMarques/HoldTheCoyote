#ifndef ENGINEABSTRACTION_SPRITE_H
#define ENGINEABSTRACTION_SPRITE_H

#include "Action.h"
#include "EventDispatcher.h"
#include "Node.h"
#include "PhysicsBody.h"
#include "Size.h"
#include "Vec2.h"
#include <string>

namespace EngineAbstraction {
    class Sprite : virtual public Node {
    public:
        virtual void setPosition(const Vec2 &position) = 0;
        virtual void setAnchorPoint(const Vec2 &anchorPoint) = 0;
        virtual void setRotation(float rotation) = 0;
        virtual void setTexture(const std::string &filename) = 0;

        virtual const Vec2 &getPosition() const = 0;
        virtual const Size &getContentSize() const = 0;
        virtual EventDispatcher &getEventDispatcher() const = 0;

        virtual void setPhysicsBody(PhysicsBody &physicsBody) = 0;
        virtual void runAction(Action &action) = 0;
        virtual void stopAction(Action &action) = 0;
    };

}

#endif
