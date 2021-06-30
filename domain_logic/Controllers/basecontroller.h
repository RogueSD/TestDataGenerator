#ifndef CONTROLLERS_BASECONTROLLER_H
#define CONTROLLERS_BASECONTROLLER_H

#include "stub.h"
#include "../DataStorage/data.h"

namespace controllers
{
    class BaseController
    {
    protected:
        int _count;

        virtual void simulate() { }
    public:
        BaseController() { }
        virtual ~BaseController() { }

        virtual Data* collectData()
        {
            return new Data();
        }
    };
} // namespace Controllers

#endif // CONTROLLERS_BASECONTROLLER_H
