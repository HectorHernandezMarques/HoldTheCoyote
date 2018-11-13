add_library(views
        Node.cpp
        Character.cpp
        HolderButton.cpp
        )

#set_property(TARGET views PROPERTY CXX_STANDARD 17)

target_include_directories(views
        PUBLIC
        ./
        ../
        PRIVATE
        ../EngineAbstraction/Interfaces/
        )

target_link_libraries(views
        PUBLIC
        models
        )