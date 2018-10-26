#include "RunActionAspect.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				RunActionAspect::RunActionAspect(cocos2d::Action *action) : action(action) {
				}

				RunActionAspect::~RunActionAspect() {

				}

				void RunActionAspect::visit(Views::Node &node) {
					node.runAction(this->action);
				}
			}
		}
	}
}