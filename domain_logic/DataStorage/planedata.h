#ifndef PLANEDATA_H
#define PLANEDATA_H

#include "data.h"
#include "stub.h"
#include <qvector.h>

class PlaneData : public Data
{
public:
    QVector<double>* fuelLevelData;
    QVector<double>* altitudeData;
    QVector<double>* attackAngleData;

    PlaneData(int);
    PlaneData(const PlaneData&);
    ~PlaneData();

    void collect(PlaneDataGenerator*);
};

#endif // PLANEDATA_H
