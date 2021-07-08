#ifndef PLANEDATA_H
#define PLANEDATA_H

#include "data.h"
#include <qvector.h>

#if defined(DATA_LIBRARY)
#  define PLANE_DATA_EXPORT Q_DECL_EXPORT
#else
#  define PLANE_DATA_EXPORT Q_DECL_IMPORT
#endif

class PLANE_DATA_EXPORT PlaneData : public Data
{
public:
    QVector<double>* fuelLevelData;
    QVector<double>* altitudeData;
    QVector<double>* attackAngleData;

    PlaneData();
    PlaneData(size_t);
    PlaneData(const PlaneData&);
    ~PlaneData();

    void collect(DataGenerator*) override;
    Data* clone() override;
};

#endif // PLANEDATA_H
