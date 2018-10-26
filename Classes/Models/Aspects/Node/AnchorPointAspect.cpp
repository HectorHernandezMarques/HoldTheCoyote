#include "AnchorPointAspect.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				AnchorPointAspect::AnchorPointAspect(cocos2d::Vec2 anchorPoint) : Aspect(), anchorPoint(anchorPoint) {
				}

				AnchorPointAspect::~AnchorPointAspect() {

				}

				void AnchorPointAspect::visit(Views::Node &node) {
					node.setAnchorPoint(this->anchorPoint);
				}
			}
		}
	}
}