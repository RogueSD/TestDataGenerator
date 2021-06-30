#ifndef FACTORIES_PLANEFACTORY_H
#define FACTORIES_PLANEFACTORY_H

#include "abstractfactory.h"

namespace factories
{
    class PlaneFactory : public AbstractFactory
    {
    public:
        PlaneFactory();
        ~PlaneFactory();

        controllers::BaseController* createController(int, int) override;
    };
} // namespace factories

#endif // FACTORIES_PLANEFACTORY_H
