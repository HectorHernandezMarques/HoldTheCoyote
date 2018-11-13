add_library(test_engine
        Action.cpp
        EngineFactory.cpp
        EventDispatcher.cpp
        EventListener.cpp
        Node.cpp
        PhysicsBody.cpp
        PhysicsShape.cpp
        Scene.cpp
        Size.cpp
        Sprite.cpp
        Vec2.cpp
        )

target_include_directories(test_engine
        PRIVATE
        ../
        )