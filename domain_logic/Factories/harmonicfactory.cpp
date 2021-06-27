#include "harmonicfactory.h"
#include "../Controllers/harmoniccontroller.h"

namespace factories {

HarmonicFactory::HarmonicFactory()
{

}

controllers::BaseController* HarmonicFactory::createController(int deltaTime, int duration)
{
    return new controllers::HarmonicController(deltaTime, duration);
}

} // namespace factories
