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

void CarData::collect(CarDataGenerator *generator)
{
    fuelLevelData->push_back(generator->getFuelLevel());
    speedData->push_back(generator->getSpeed());
    temperatureData->push_back(generator->getTemperature());
    rpmData->push_back(generator->getRotationalSpeed());
}
