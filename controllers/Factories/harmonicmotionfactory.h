#ifndef FACTORIES_HARMONICFACTORY_H
#define FACTORIES_HARMONICFACTORY_H

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
