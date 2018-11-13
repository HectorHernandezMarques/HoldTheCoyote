#ifndef HOLDTHECOYOTE_MODELS_OBSERVERS_NODEOBSERVER_H
#define HOLDTHECOYOTE_MODELS_OBSERVERS_NODEOBSERVER_H

namespace HoldTheCoyote::Models::Aspects::Node { //indirect cicle
    class Aspect;

}

namespace EngineAbstraction {
    class Scene;
}

namespace HoldTheCoyote::Models::Observers {

    class NodeObserver {
    public:
        virtual void update(Aspects::Node::Aspect &aspect) = 0;
        virtual const EngineAbstraction::Vec2 &getCurrentPosition() const = 0;
        virtual const EngineAbstraction::Size &getContentSize() const = 0;
        virtual EngineAbstraction::Scene &getScene() = 0;
    };
}

#endif