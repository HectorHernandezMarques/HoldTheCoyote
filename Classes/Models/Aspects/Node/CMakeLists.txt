add_library(node_aspects
        AddEventListenerWithSceneGraphPriorityAspect.cpp
        AnchorPointAspect.cpp
        PhysicAspect.cpp
        PositionAspect.cpp
        RotationAspect.cpp
        RunActionAspect.cpp
        StopActionAspect.cpp
        TextureAspect.cpp
        )

set_property(TARGET node_aspects PROPERTY CXX_STANDARD 17)

include(CocosBuildSet)

target_link_libraries(node_aspects
        PRIVATE
            cocos2d
        )
