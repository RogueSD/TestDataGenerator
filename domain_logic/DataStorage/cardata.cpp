#include "cardata.h"
#define CAR 3

CarData::CarData(int count)
{
    identity = CAR;

    fuelLevelData = new QVector<double>();
    speedData = new QVector<double>();
    temperatureData = new QVector<double>();
    rpmData = new QVector<int>();

    fuelLevelData->reserve(count);
    speedData->reserve(count);
    temperatureData->reserve(count);
    rpmData->reserve(count);
}

CarData::CarData(const CarData& other)
{
    identity = CAR;
    fuelLevelData = new QVector<double>(*other.fuelLevelData);
    speedData = new QVector<double>(*other.speedData);
    temperatureData = new QVector<double>(*other.temperatureData);
    rpmData = new QVector<int>(*other.rpmData);
}

CarData::~CarData()
{
    delete rpmData;
    delete temperatureData;
    delete speedData;
    delete fuelLevelData;
}

Data* CarData::clone()
{
    return new CarData(*this);
}

void CarData::collect(DataGenerator *generator)
{
    CarDataGenerator* cast_generator = static_cast<CarDataGenerator*>(generator);

    fuelLevelData->push_back(cast_generator->getFuelLevel());
    speedData->push_back(cast_generator->getSpeed());
    temperatureData->push_back(cast_generator->getTemperature());
    rpmData->push_back(cast_generator->getRotationalSpeed());
}
