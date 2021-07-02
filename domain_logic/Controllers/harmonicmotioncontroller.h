#ifndef CONTROLLERS_HARMONICCONTROLLER_H
#define CONTROLLERS_HARMONICCONTROLLER_H

#include "basecontroller.h"
#include "../DataStorage/harmonicmotiondata.h"
#include "stub.h"
#include "../Validators/harmonicmotionvalidator.h"

namespace controllers
{
    class HarmonicMotionController : public BaseController
    {
    private:
        void initialize() override;
    public:
        HarmonicMotionController(int, int);
        ~HarmonicMotionController();
    };
} // namespace controllers

#endif // CONTROLLERS_HARMONICCONTROLLER_H
