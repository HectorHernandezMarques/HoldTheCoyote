#include "PhysicBox.h"

namespace HoldTheCoyote {
	namespace Models {
		namespace Physics {

			PhysicBox::PhysicBox(int bitmask, cocos2d::Size size) : Physic(this->init(bitmask, size)), size(size) {
			}

			PhysicBox::~PhysicBox() {
			}

			cocos2d::PhysicsBody& PhysicBox::init(int bitmask, cocos2d::Size &size) {
				cocos2d::PhysicsBody &result = *cocos2d::PhysicsBody::createBox(size);
				result.setCollisionBitmask(bitmask);
				return result;
			}
		}
	}
}