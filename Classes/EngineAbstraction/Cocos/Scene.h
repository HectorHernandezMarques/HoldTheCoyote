#ifndef ENGINEABSTRACTION_COCOS_SCENE_H
#define ENGINEABSTRACTION_COCOS_SCENE_H

#include "../Interfaces/Scene.h"
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class Scene : public EngineAbstraction::Scene {

    public:
        Scene(cocos2d::Scene &scene);
        virtual ~Scene() = default;

        Scene(Scene const &rhs) = delete;
        Scene &operator=(Scene const &rhs) = delete;

        Scene(Scene &&rhs) noexcept = delete;
        Scene &operator=(Scene &&rhs) noexcept = delete;

        void addChild(EngineAbstraction::Sprite &child) override;
        void removeChild(EngineAbstraction::Sprite &child) override;

        cocos2d::Scene &getScene();

    private:
        cocos2d::Scene &scene;
    };

}

#endif
