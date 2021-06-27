#ifndef FACTORIES_HARMONICFACTORY_H
#define FACTORIES_HARMONICFACTORY_H

#include "abstractfactory.h"

namespace factories {

class HarmonicFactory : public AbstractFactory
{
public:
    HarmonicFactory();
    controllers::BaseController* createController(int, int) override;
};

} // namespace factories

#endif // FACTORIES_HARMONICFACTORY_H
