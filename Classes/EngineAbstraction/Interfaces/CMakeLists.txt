add_library(engine_abstraction
        EngineFactory.cpp
        )

target_include_directories(engine_abstraction
        PRIVATE
        ../
        )

target_compile_definitions(engine_abstraction
        PRIVATE
        ENGINE_USED=COCOS2DX
        )

target_link_libraries(engine_abstraction
        PRIVATE
        cocos_engine
        test_engine
        )