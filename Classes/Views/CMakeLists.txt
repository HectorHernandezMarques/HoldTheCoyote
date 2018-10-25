add_library(Views
        Character.cpp
        HolderButton.cpp
        Node.cpp
        )

include(CocosBuildSet)

target_link_libraries(Views
        PRIVATE
            cocos2d
        )