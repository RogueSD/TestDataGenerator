#ifndef FACTORIES_ABSTACTFACTORY_H
#define FACTORIES_ABSTACTFACTORY_H

#include "../Controllers/basecontroller.h"

namespace factories
{
    class AbstractFactory
    {
    public:
        AbstractFactory();
        virtual ~AbstractFactory();
        virtual controllers::BaseController* createController(double, int) = 0;
    };
} // namespace factories

#endif // FACTORIES_ABSTACTFACTORY_H
