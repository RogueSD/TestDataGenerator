#ifndef CONTROLLERS_PLANECONTROLLER_H
#define CONTROLLERS_PLANECONTROLLER_H

#include "basecontroller.h"
#include "../data/Storage/planedata.h"
#include "../validators/planevalidator.h"
#include "../data/Options/planedataoptions.h"

namespace controllers
{
    class PlaneController : public BaseController
    {
    private:
        PlaneDataOptions* _options;

        void initialize() override;
    public:
        PlaneController(double, int);
        ~PlaneController();

        void configureGenerator(DataOptions*) override;
    };
} // namespace controllers

#endif // CONTROLLERS_PLANECONTROLLER_H
