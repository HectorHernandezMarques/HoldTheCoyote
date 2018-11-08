add_library(physics
        Physic.cpp
        PhysicBox.cpp
        PhysicEmpty.cpp
        PhysicPolygon.cpp)

#set_property(TARGET physics PROPERTY CXX_STANDARD 17)

target_include_directories(physics
        PRIVATE
        ../../EngineAbstraction/Interfaces/)

target_link_libraries(physics
        PRIVATE
        engine_abstraction
        )