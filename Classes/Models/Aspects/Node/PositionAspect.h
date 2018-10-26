#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_POSITIONASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_POSITIONASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				class PositionAspect : virtual public Aspect {
				public:
					PositionAspect(cocos2d::Vec2 &position);
					virtual ~PositionAspect();

					void visit(Views::Node &node);

				protected:

				private:
					cocos2d::Vec2 &position;
				};
			}
		}
	}
}

#endif
