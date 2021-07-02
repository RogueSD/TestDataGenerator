#ifndef DATA_H
#define DATA_H
#include "stub.h"

struct Data
{
    char identity;

    Data() { }
    virtual ~Data() { }

    virtual void collect(DataGenerator*) = 0;
    virtual Data* clone() = 0;
};

#endif // DATA_H
