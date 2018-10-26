#ifndef HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICPOLYGON_H
#define HOLDTHECOYOTE_MODELS_PHYSICS_PHYSICPOLYGON_H

#include <cocos2d.h>
#include "Physic.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Physics {

			class PhysicPolygon : public Physic
			{
			public:
				PhysicPolygon(int bitmask, std::list<cocos2d::Vec2> &points);
				virtual ~PhysicPolygon();

			protected:
				cocos2d::PhysicsBody& init(int bitmask, std::list<cocos2d::Vec2> &points);

			};
		}
	}
}

#endif
