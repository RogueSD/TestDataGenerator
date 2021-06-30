#ifndef CONTROLLERS_HARMONICCONTROLLER_H
#define CONTROLLERS_HARMONICCONTROLLER_H

#include "basecontroller.h"
#include "../DataStorage/harmonicmotiondata.h"
#include "stub.h"

namespace controllers
{
    class HarmonicMotionController : public BaseController
    {
    private:
        HarmonicMotionData* _data;
        HarmonicMotionDataGenerator* _generator;

        void simulate() override;
    public:
        HarmonicMotionController(int, int);
        ~HarmonicMotionController();

        Data* collectData() override;
    };
} // namespace controllers

#endif // CONTROLLERS_HARMONICCONTROLLER_H
