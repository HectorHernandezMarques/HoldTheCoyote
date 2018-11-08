add_library(cocos_engine
        Action.cpp
        EngineFactory.cpp
        EventListener.cpp
        PhysicsBody.cpp
        PhysicsShape.cpp
        Size.cpp
        Vec2.cpp
        )

target_include_directories(cocos_engine
        PRIVATE
        ../
        )

include(CocosBuildSet)

target_link_libraries(cocos_engine
        PRIVATE
        cocos2d
        )