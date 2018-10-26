#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICEMPTY_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICEMPTY_H

#include <cocos2d.h>
#include "Physic.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Physics {

			class PhysicEmpty : public Physic
			{
			public:
				PhysicEmpty();
				virtual ~PhysicEmpty();

			protected:
				cocos2d::PhysicsBody& init();

			};
		}
	}
}

#endif
