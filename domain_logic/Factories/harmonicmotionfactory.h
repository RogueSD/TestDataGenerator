#ifndef FACTORIES_HARMONICFACTORY_H
#define FACTORIES_HARMONICFACTORY_H

#include "domain_logic_global.h"
#include "abstractfactory.h"

namespace factories
{
    class HarmonicMotionFactory : public AbstractFactory
    {
    public:
        HarmonicMotionFactory();
        ~HarmonicMotionFactory();

        controllers::BaseController* createController(double, int) override;
    };
} // namespace factories

#endif // FACTORIES_HARMONICFACTORY_H
