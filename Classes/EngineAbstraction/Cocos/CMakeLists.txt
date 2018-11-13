add_library(cocos_engine
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

target_include_directories(cocos_engine
        PRIVATE
        ../
        )

include(CocosBuildSet)

target_link_libraries(cocos_engine
        PRIVATE
        cocos2d
        )