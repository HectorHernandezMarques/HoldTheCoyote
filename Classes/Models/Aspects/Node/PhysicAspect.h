#ifndef HOLDTHECOYOTE_MODELS_ASPECTS_NODE_PHYSICASPECT_H
#define HOLDTHECOYOTE_MODELS_ASPECTS_NODE_PHYSICASPECT_H

#include <cocos2d.h>
#include "Aspect.h"
#include "../../../Views/Node.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Aspects {
			namespace Node {

				class PhysicAspect : virtual public Aspect {
				public:
					PhysicAspect(cocos2d::PhysicsBody &physicBody);
					virtual ~PhysicAspect();

					void visit(Views::Node &node);

				protected:

				private:
					cocos2d::PhysicsBody &physicBody;
				};
			}
		}
	}
}

#endif
