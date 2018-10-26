#include "StopActionAspect.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				StopActionAspect::StopActionAspect(cocos2d::Action *animationAction) : animationAction(animationAction) {
				}

				StopActionAspect::~StopActionAspect() {

				}

				void StopActionAspect::visit(Views::Node &node) {
					node.stopAction(this->animationAction);
				}
			}
		}
	}
}