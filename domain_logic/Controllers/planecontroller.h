#ifndef CONTROLLERS_PLANECONTROLLER_H
#define CONTROLLERS_PLANECONTROLLER_H

#include "basecontroller.h"
#include "../DataStorage/planedata.h"
#include "../Validators/planevalidator.h"

namespace controllers
{
    class PlaneController : public BaseController
    {
    private:
        void initialize() override;
    public:
        PlaneController(int, int);
        ~PlaneController();
    };
} // namespace controllers

#endif // CONTROLLERS_PLANECONTROLLER_H
