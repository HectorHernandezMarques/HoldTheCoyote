#include "TextureAspect.h"

namespace HoldTheCoyote::Models::Aspects::Node {

    TextureAspect::TextureAspect(std::string texture) : texture(std::move(texture)) {
    }

    void TextureAspect::visit(Views::Node &node) {
        node.setTexture(this->texture);
    }
}