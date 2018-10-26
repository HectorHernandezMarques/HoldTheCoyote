#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ANCHORPOINTASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_ANCHORPOINTASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				class AnchorPointAspect : virtual public Aspect {
				public:
					AnchorPointAspect(cocos2d::Vec2 anchorPoint);
					virtual ~AnchorPointAspect();

					void visit(Views::Node &node);

				protected:

				private:
					cocos2d::Vec2 anchorPoint;
				};
			}
		}
	}
}

#endif
