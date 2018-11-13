#include "Scene.h"
#include "Sprite.h"

namespace EngineAbstraction::Cocos {

    Scene::Scene(cocos2d::Scene &scene) : scene(scene) {

    }

    void Scene::addChild(EngineAbstraction::Sprite &child) {
        this->scene.addChild(&static_cast<Sprite &>(child).getSprite());
    }

    void Scene::removeChild(EngineAbstraction::Sprite &child) {
        this->scene.removeChild(&static_cast<Sprite &>(child).getSprite());
    }

    cocos2d::Scene &Scene::getScene() {
        return this->scene;
    }
}
