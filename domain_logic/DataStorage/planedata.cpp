#include "planedata.h"
#define PLANE 2

PlaneData::PlaneData(int count)
{
    identity = PLANE;

    altitudeData = new QVector<double>();
    fuelLevelData =  new QVector<double>();
    attackAngleData = new QVector<double>();

    altitudeData->reserve(count);
    fuelLevelData->reserve(count);
    attackAngleData->reserve(count);
}

PlaneData::PlaneData(const PlaneData& other)
{
    identity = PLANE;

    altitudeData = new QVector<double>(*other.altitudeData);
    fuelLevelData =  new QVector<double>(*other.fuelLevelData);
    attackAngleData = new QVector<double>(*other.attackAngleData);
}

PlaneData::~PlaneData()
{
    delete attackAngleData;
    delete altitudeData;
    delete fuelLevelData;
}

void PlaneData::collect(PlaneDataGenerator *generator)
{
    fuelLevelData->push_back(generator->getFuelLevel());
    altitudeData->push_back(generator->getAltitude());
    attackAngleData->push_back(generator->getAttackAngle());
}
