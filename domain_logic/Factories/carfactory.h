#ifndef FACTORIES_CARFACTORY_H
#define FACTORIES_CARFACTORY_H

#include "domain_logic_global.h"
#include "abstractfactory.h"

namespace factories {

class CarFactory : public AbstractFactory
{
public:
    CarFactory();
    ~CarFactory();

    controllers::BaseController* createController(double, int) override;

};

} // namespace factories

#endif // FACTORIES_CARFACTORY_H
