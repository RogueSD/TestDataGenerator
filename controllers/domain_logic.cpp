#define HARMONIC 1
#define PLANE 2
#define CAR 3

#include "Factories/harmonicmotionfactory.h"
#include "Factories/carfactory.h"
#include "Factories/planefactory.h"
#include <stdexcept>
#include "domain_logic.h"


Data* generateTestData(char id, double step, int duration, DataOptions* options)
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
        throw std::invalid_argument("There is no controller with this ID.");
        break;
    }

    controllers::BaseController* controller = factory->createController(step, duration);

    if(options)
        controller->configureGenerator(options);

    Data* data = controller->collectData();

    delete controller;
    delete factory;

    return data;
}
