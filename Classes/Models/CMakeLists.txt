add_subdirectory(Aspects)
add_subdirectory(Observers)
add_subdirectory(Physics)

add_library(models
        Character.cpp
        HolderButton.cpp
        Node.cpp)

target_include_directories(models
        PRIVATE
        ../EngineAbstraction/Interfaces/
        )

#set_property(TARGET models PROPERTY CXX_STANDARD 17)

include(CocosBuildSet)

target_link_libraries(models
        PRIVATE
            cocos2d
            physics
            node_aspects
        )