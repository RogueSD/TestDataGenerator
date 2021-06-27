#ifndef FACTORIES_ABSTACTFACTORY_H
#define FACTORIES_ABSTACTFACTORY_H

#include "../Controllers/basecontroller.h"

namespace factories {

class AbstractFactory
{
public:
    virtual controllers::BaseController* createController(int, int)
    {
        return nullptr;
    }
};
} // namespace Factories

#endif // FACTORIES_ABSTACTFACTORY_H
