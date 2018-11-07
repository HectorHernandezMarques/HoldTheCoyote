#ifndef ENGINEABSTRACTION_COCOS_SIZE_H
#define ENGINEABSTRACTION_COCOS_SIZE_H

#include <Interfaces/Size.h>
#include <cocos2d.h>

namespace EngineAbstraction::Cocos {

    class Size : public EngineAbstraction::Size {

    public:
        Size(cocos2d::Size &size);
        virtual ~Size();

        Size(Size const &rhs) = delete;
        Size &operator=(Size const &rhs) = delete;

        Size(Size &&rhs) noexcept = delete;
        Size &operator=(Size &&rhs) noexcept = delete;

        cocos2d::Size getSize();

    private:
        cocos2d::Size &size;

    };

}

#endif
