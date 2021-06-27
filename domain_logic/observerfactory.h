#ifndef OBSERVERFACTORY_H
#define OBSERVERFACTORY_H

#include "stub.h"

class ObserverFactory
{
public:
    Observer* createObserver(const Controller* controller);
};

#endif // OBSERVERFACTORY_H
