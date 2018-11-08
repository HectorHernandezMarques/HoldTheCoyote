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

#set_property(TARGET node_aspects PROPERTY CXX_STANDARD 17)

target_include_directories(node_aspects
        PRIVATE
        ../../../EngineAbstraction/Interfaces/
        )

target_link_libraries(node_aspects
        PRIVATE
        engine_abstraction
        )
