#ifndef CARDATA_H
#define CARDATA_H

#include "data.h"
#include <qvector.h>
#include "stub.h"
struct CarData : public Data
{
public:
    QVector<double>* fuelLevelData;
    QVector<double>* speedData;
    QVector<double>* temperatureData;
    QVector<int>* rpmData;

    CarData(int);
    CarData(const CarData&);
    ~CarData();

    void collect(DataGenerator*) override;
    Data* clone() override;
};

#endif // CARDATA_H
