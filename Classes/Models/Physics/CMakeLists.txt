add_library(physics
        Physic.cpp
        PhysicBox.cpp
        PhysicEmpty.cpp
        PhysicPolygon.cpp)

#set_property(TARGET physics PROPERTY CXX_STANDARD 17)

include(CocosBuildSet)

target_link_libraries(physics
        PRIVATE
            cocos2d
        )