#ifndef FACTORIES_ABSTACTFACTORY_H
#define FACTORIES_ABSTACTFACTORY_H

#include "domain_logic_global.h"
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
