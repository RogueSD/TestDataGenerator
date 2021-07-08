#ifndef CONTROLLERS_HARMONICCONTROLLER_H
#define CONTROLLERS_HARMONICCONTROLLER_H

#include "basecontroller.h"
#include "../data/Storage/harmonicmotiondata.h"
#include "../validators/harmonicmotionvalidator.h"
#include "../data/Options/harmonicmotiondataoptions.h"

namespace controllers
{
    class HarmonicMotionController : public BaseController
    {
    private:
        HarmonicMotionDataOptions* _options;

        void initialize() override;
    public:
        HarmonicMotionController(double, int);
        ~HarmonicMotionController();

        void configureGenerator(DataOptions*) override;
    };
} // namespace controllers

#endif // CONTROLLERS_HARMONICCONTROLLER_H
