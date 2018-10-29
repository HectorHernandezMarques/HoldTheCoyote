#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_TEXTUREASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_TEXTUREASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    class TextureAspect : virtual public Aspect {
    public:
        TextureAspect(std::string texture);
        virtual ~TextureAspect() = default;

        void visit(Views::Node &node) override;

    protected:

    private:
        std::string texture;
    };
}

#endif
