#include "EngineFactory.h"
#include "Cocos/EngineFactory.h"
#include "Test/EngineFactory.h"

#define TESTING 0
#define COCOS2DX 1

namespace EngineAbstraction {

    EngineFactory *EngineFactory::instance = nullptr;

    EngineFactory &EngineFactory::getInstance() {
        if (EngineFactory::instance == nullptr) {
#if ENGINE_USED == TESTING
            EngineFactory::instance = new Test::EngineFactory();
#elif ENGINE_USED == COCOS2DX
            EngineFactory::instance = new Cocos::EngineFactory();
#endif
        }
        return *EngineFactory::instance;
    }
}