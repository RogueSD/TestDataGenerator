#include "planedata.h"
#include "stub.h"

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

Data* PlaneData::clone()
{
    return new PlaneData(*this);
}

void PlaneData::collect(DataGenerator *generator)
{
    PlaneDataGenerator* cast_generator = static_cast<PlaneDataGenerator*>(generator);

    fuelLevelData->push_back(cast_generator->getFuelLevel());
    altitudeData->push_back(cast_generator->getAltitude());
    attackAngleData->push_back(cast_generator->getAttackAngle());
}
