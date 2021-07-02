#ifndef CONTROLLERS_CARCONTROLLER_H
#define CONTROLLERS_CARCONTROLLER_H

#include "basecontroller.h"
#include "../DataStorage/cardata.h"
#include "../Validators/carvalidator.h"

namespace controllers
{
    class CarController : public BaseController
    {
    private:
        void initialize() override;
    public:
        CarController(int, int);
        ~CarController();
    };

} // namespace controllers

#endif // CONTROLLERS_CARCONTROLLER_H
