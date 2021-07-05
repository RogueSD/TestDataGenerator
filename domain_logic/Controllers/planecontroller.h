#ifndef CONTROLLERS_PLANECONTROLLER_H
#define CONTROLLERS_PLANECONTROLLER_H

#include "domain_logic_global.h"
#include "basecontroller.h"
#include "../DataStorage/planedata.h"
#include "../Validators/planevalidator.h"
#include "../Options/planedataoptions.h"

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
