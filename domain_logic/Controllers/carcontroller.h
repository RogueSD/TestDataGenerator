#ifndef CONTROLLERS_CARCONTROLLER_H
#define CONTROLLERS_CARCONTROLLER_H

#include "domain_logic_global.h"
#include "basecontroller.h"
#include "../DataStorage/cardata.h"
#include "../Validators/carvalidator.h"
#include "../Options/cardataoptions.h"

namespace controllers
{
    class CarController : public BaseController
    {
    private:
        CarDataOptions* _options;

        void initialize() override;
    public:
        CarController(double, int);
        ~CarController();
        void configureGenerator(DataOptions*) override;
    };

} // namespace controllers

#endif // CONTROLLERS_CARCONTROLLER_H
