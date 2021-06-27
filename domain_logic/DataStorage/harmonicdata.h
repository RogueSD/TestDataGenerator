#ifndef HARMONICDATA_H
#define HARMONICDATA_H

#include "data.h"
#include <qvector.h>
#include "stub.h"

struct HarmonicData : public Data
{
    QVector<double>* phaseData;
    HarmonicData(int);
    void collect(HarmonicDataGenerator*);
};

#endif // HARMONICDATA_H
