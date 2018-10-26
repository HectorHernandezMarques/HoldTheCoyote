#include "TextureAspect.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				TextureAspect::TextureAspect(std::string texture) : texture(texture) {
				}

				TextureAspect::~TextureAspect() {

				}

				void TextureAspect::visit(Views::Node &node) {
					node.setTexture(this->texture);
				}
			}
		}
	}
}