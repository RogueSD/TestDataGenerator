#ifndef CONTROLLERS_PLANECONTROLLER_H
#define CONTROLLERS_PLANECONTROLLER_H

#include "basecontroller.h"
#include "../DataStorage/planedata.h"

namespace controllers
{
    class PlaneController : public BaseController
    {
    private:
        PlaneData* _data;
        PlaneDataGenerator* _generator;

        void simulate() override;
    public:
        PlaneController(int, int);
        ~PlaneController();

        Data* collectData() override;
    };
} // namespace controllers

#endif // CONTROLLERS_PLANECONTROLLER_H
