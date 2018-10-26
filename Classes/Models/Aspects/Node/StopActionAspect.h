#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_STOPACTIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_STOPACTIONASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				class StopActionAspect : virtual public Aspect {
				public:
					StopActionAspect(cocos2d::Action *animationAction);
					virtual ~StopActionAspect();

					void visit(Views::Node &node);

				protected:

				private:
					cocos2d::Action *animationAction;
				};
			}
		}
	}
}

#endif
