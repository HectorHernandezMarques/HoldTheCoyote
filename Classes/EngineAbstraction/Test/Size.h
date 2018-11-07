#ifndef ENGINEABSTRACTION_TEST_SIZE_H
#define ENGINEABSTRACTION_COCOS_SIZE_H

#include <Interfaces/Size.h>

namespace EngineAbstraction::Test {

    class Size : public EngineAbstraction::Size {

    public:
        Size() = default;
        virtual ~Size() = default;

        Size(Size const &rhs) = delete;
        Size &operator=(Size const &rhs) = delete;

        Size(Size &&rhs) noexcept = delete;
        Size &operator=(Size &&rhs) noexcept = delete;

    };

}

#endif
