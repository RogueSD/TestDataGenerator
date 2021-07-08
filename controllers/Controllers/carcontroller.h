#ifndef CONTROLLERS_CARCONTROLLER_H
#define CONTROLLERS_CARCONTROLLER_H

#include "basecontroller.h"
#include "../data/Storage/cardata.h"
#include "../validators/carvalidator.h"
#include "../data/Options/cardataoptions.h"

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
