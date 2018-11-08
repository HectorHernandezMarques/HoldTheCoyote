#ifndef HOLDTHECOYOTE_MODELS_OBSERVERS_NODEOBSERVER_H
#define HOLDTHECOYOTE_MODELS_OBSERVERS_NODEOBSERVER_H

namespace HoldTheCoyote::Models::Aspects::Node {
    class Aspect;

}


namespace cocos2d {
    class Scene;

    class Sprite;

    class Vec2;

    class Size;
}

namespace HoldTheCoyote::Models::Observers {

    class NodeObserver {
    public:
        virtual void update(Aspects::Node::Aspect &aspect) = 0;
        virtual cocos2d::Vec2 getCurrentPosition() = 0;
        virtual cocos2d::Size getContentSize() = 0;
        virtual cocos2d::Scene &getScene() = 0;
    };
}

#endif