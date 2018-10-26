add_library(Views
        Character.cpp
        HolderButton.cpp
        Node.cpp
        )

set_property(TARGET Views PROPERTY CXX_STANDARD 17)

target_include_directories(Views
        PRIVATE
            ../../Classes
        )

include(CocosBuildSet)

target_link_libraries(Views
        PRIVATE
            cocos2d
            Models
        )