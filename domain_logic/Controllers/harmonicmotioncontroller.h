#ifndef CONTROLLERS_HARMONICCONTROLLER_H
#define CONTROLLERS_HARMONICCONTROLLER_H

#include "domain_logic_global.h"
#include "basecontroller.h"
#include "../DataStorage/harmonicmotiondata.h"
#include "../Validators/harmonicmotionvalidator.h"
#include "../Options/harmonicmotiondataoptions.h"

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
