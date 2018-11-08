#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_TEXTUREASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_TEXTUREASPECT_H

#include "Aspect.h"
#include <string>

namespace HoldTheCoyote::Models::Aspects::Node {

    class TextureAspect : virtual public Aspect {
    public:
        TextureAspect(std::string texture);
        virtual ~TextureAspect() = default;

        TextureAspect(TextureAspect const &rhs) = delete;
        TextureAspect &operator=(TextureAspect const &rhs) = delete;

        TextureAspect(TextureAspect &&rhs) noexcept = delete;
        TextureAspect &operator=(TextureAspect &&rhs) noexcept = delete;

        void visit(Views::Node &node) override;

    protected:

    private:
        std::string texture;
    };
}

#endif
