add_library(test_engine
        EngineFactory.cpp
        PhysicsBody.cpp
        PhysicsShape.cpp
        Size.cpp
        Vec2.cpp
        )

target_include_directories(test_engine
        PRIVATE
        ../
        )