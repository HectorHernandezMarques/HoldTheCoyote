#ifndef ENGINEABSTRACTION_TEST_SCENE_H
#define ENGINEABSTRACTION_TEST_SCENE_H

#include "../Interfaces/Scene.h"

namespace EngineAbstraction::Test {

    class Scene : public EngineAbstraction::Scene {

    public:
        Scene() = default;
        virtual ~Scene() = default;

        Scene(Scene const &rhs) = delete;
        Scene &operator=(Scene const &rhs) = delete;

        Scene(Scene &&rhs) noexcept = delete;
        Scene &operator=(Scene &&rhs) noexcept = delete;

    private:

    };

}

#endif
