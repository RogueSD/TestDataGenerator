#include "carfactory.h"
#include "../Controllers/carcontroller.h"

namespace factories
{
    CarFactory::CarFactory() { }
    CarFactory::~CarFactory() { }

    controllers::BaseController* CarFactory::createController(int step, int duration)
    {
        return new controllers::CarController(step, duration);
    }

} // namespace factories
