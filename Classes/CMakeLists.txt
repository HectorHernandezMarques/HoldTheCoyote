#add_subdirectory(Controllers)
add_subdirectory(EngineAbstraction)
add_subdirectory(Models)
add_subdirectory(Views)

add_library(common_classes
        AppDelegate.cpp
        HelloWorldScene.cpp
        )

#set_property(TARGET common_classes PROPERTY CXX_STANDARD 17)

include(CocosBuildSet)
if (NOT USE_COCOS_PREBUILT)
    add_subdirectory(${COCOS2DX_ROOT_PATH}/cocos ${ENGINE_BINARY_PATH}/cocos/core)
endif ()

target_link_libraries(common_classes
        PRIVATE
        cocos2d
        cocos_engine
        #controllers
        models
        views)