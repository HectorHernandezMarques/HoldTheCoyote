#add_subdirectory(Controllers)
add_subdirectory(Models)
add_subdirectory(Views)

add_library(CommonClasses
        AppDelegate.cpp
        HelloWorldScene.cpp
        )

set_property(TARGET CommonClasses PROPERTY CXX_STANDARD 17)

include(CocosBuildSet)
if (NOT USE_COCOS_PREBUILT)
    add_subdirectory(${COCOS2DX_ROOT_PATH}/cocos ${ENGINE_BINARY_PATH}/cocos/core)
endif ()

target_link_libraries(CommonClasses
        PRIVATE
            cocos2d
            #Controllers
            Models
            Views)