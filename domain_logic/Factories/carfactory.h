#ifndef FACTORIES_CARFACTORY_H
#define FACTORIES_CARFACTORY_H

#include "abstractfactory.h"

namespace factories {

class CarFactory : public AbstractFactory
{
public:
    CarFactory();
    ~CarFactory();

    controllers::BaseController* createController(int, int) override;

};

} // namespace factories

#endif // FACTORIES_CARFACTORY_H
