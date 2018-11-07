#ifndef ENGINEABSTRACTION_PHYSICSSHAPE_H
#define ENGINEABSTRACTION_PHYSICSSHAPE_H

namespace EngineAbstraction {
    class PhysicsShape {
    public:
        virtual void setFriction(float friction) = 0;
    };

}

#endif
