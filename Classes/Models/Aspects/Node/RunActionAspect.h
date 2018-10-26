#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_RUNACTIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_RUNACTIONASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				class RunActionAspect : virtual public Aspect {
				public:
					RunActionAspect(cocos2d::Action *action);
					virtual ~RunActionAspect();

					void visit(Views::Node &node);

				protected:

				private:
					cocos2d::Action *action;
				};
			}
		}
	}
}

#endif
