#define HARMONIC 1
#define PLANE 2
#define CAR 3
#include "Factories/harmonicmotionfactory.h"
#include "Factories/carfactory.h"
#include "Factories/planefactory.h"

Data* generateTestData(char id, int step, int duration)
{
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
        factory = nullptr;
        break;
    }

    controllers::BaseController* controller = factory->createController(step, duration);
    Data* data = controller->collectData();

    delete controller;
    delete factory;

    return data;
}
