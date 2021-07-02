#define HARMONIC 1
#define CAR 2
#define PLANE 3

#include "Factories/harmonicmotionfactory.h"
#include "Factories/carfactory.h"
#include "Factories/planefactory.h"
#include <stdexcept>

Data* generateTestData(char id)
{
    int step = 0;
    //int step = ui->step_spinbox->value();
    int duration = 0;
    //int duration = ui->duration_spinbox->value();
    factories::AbstractFactory* factory;

    switch(id)
    {
    case HARMONIC:
        factory = new factories::HarmonicMotionFactory();
        break;
    case CAR:
        factory = new factories::CarFactory();
        break;
    case PLANE:
        factory = new factories::PlaneFactory();
        break;
    default:
        throw std::invalid_argument("There is no controller with this ID.");
        break;
    }

    controllers::BaseController* controller = factory->createController(step, duration);
    Data* data = controller->collectData();

    delete controller;
    delete factory;

    return data;
}
