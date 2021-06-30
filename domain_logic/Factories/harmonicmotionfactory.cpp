#include "harmonicmotionfactory.h"
#include "../Controllers/harmonicmotioncontroller.h"

namespace factories
{
    HarmonicMotionFactory::HarmonicMotionFactory() { }
    HarmonicMotionFactory::~HarmonicMotionFactory() { }

    controllers::BaseController* HarmonicMotionFactory::createController(int step, int duration)
    {
        return new controllers::HarmonicMotionController(step, duration);
    }

} // namespace factories
