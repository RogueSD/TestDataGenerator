#ifndef CARDATA_H
#define CARDATA_H

#include "data.h"
#include <qvector.h>
#include "../data/CarDataGenerator.h"

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define CAR_DATA_EXPORT Q_DECL_EXPORT
#else
#  define CAR_DATA_EXPORT Q_DECL_IMPORT
#endif

struct CAR_DATA_EXPORT CarData : public Data
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
