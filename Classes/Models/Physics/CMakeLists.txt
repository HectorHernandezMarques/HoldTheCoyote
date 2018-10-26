add_library(physics
        Physic.cpp
        PhysicBox.cpp
        PhysicEmpty.cpp
        PhysicPolygon.cpp)

include(CocosBuildSet)

target_link_libraries(physics
        PRIVATE
            cocos2d
        )