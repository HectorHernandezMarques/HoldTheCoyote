add_library(Models
        Character.cpp
        HolderButton.cpp
        Node.cpp)

add_subdirectory(Aspects)
add_subdirectory(Observers)
add_subdirectory(Physics)

set_property(TARGET Models PROPERTY CXX_STANDARD 17)

include(CocosBuildSet)

target_link_libraries(Models
        PRIVATE
            cocos2d
            physics
            node_aspects
        )