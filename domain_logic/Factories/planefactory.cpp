#include "planefactory.h"
#include "../Controllers/planecontroller.h"

namespace factories
{
    PlaneFactory::PlaneFactory() { }
    PlaneFactory::~PlaneFactory() { }

    controllers::BaseController* PlaneFactory::createController(int step, int duration)
    {
        return new controllers::PlaneController(step, duration);
    }
} // namespace factories
