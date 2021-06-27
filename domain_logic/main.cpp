#define HARMONIC 1
#define PLANE 2
#define CAR 3
#include "Factories/harmonicfactory.h"

Data* generateTestData(char id, int deltaTime, int duration)
{
    factories::AbstractFactory* factory;

    switch(id)
    {
    case HARMONIC:
        factory = new factories::HarmonicFactory();
        break;
    default:
        //coming soon...
        factory = nullptr;
    }

    controllers::BaseController* controller = factory->createController(deltaTime, duration);
    return controller->collectData();
}
