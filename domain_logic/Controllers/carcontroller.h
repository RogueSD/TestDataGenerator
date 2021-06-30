#ifndef CONTROLLERS_CARCONTROLLER_H
#define CONTROLLERS_CARCONTROLLER_H

#include "basecontroller.h"
#include "../DataStorage/cardata.h"

namespace controllers
{
    class CarController : public BaseController
    {
    private:
        CarData* _data;
        CarDataGenerator* _generator;

        void simulate() override;
    public:
        CarController(int, int);
        ~CarController();

        Data* collectData() override;
    };

} // namespace controllers

#endif // CONTROLLERS_CARCONTROLLER_H
