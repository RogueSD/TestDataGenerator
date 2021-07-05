#include "cardataoptions.h"

double CarDataOptions::getMinSpeed() const
{
    return _minSpeed;
}

double CarDataOptions::getMaxSpeed() const
{
    return _maxSpeed;
}

double CarDataOptions::getMinFuelLevel() const
{
    return _minFuelLevel;
}

double CarDataOptions::getMaxFuelLevel() const
{
    return _maxFuelLevel;
}

double CarDataOptions::getMinTemperature() const
{
    return _minTemperature;
}

double CarDataOptions::getMaxTemperature() const
{
    return _maxTemperature;
}

double CarDataOptions::getMinEngineRPM() const
{
    return _minEngineRPM;
}

double CarDataOptions::getMaxEngineRPM() const
{
    return _maxEngineRPM;
}

CarDataOptions::CarDataOptions(double minSpeed, double maxSpeed,
                               double minFuelLevel, double maxFuelLevel,
                               double minTemperature, double maxTemperature,
                               double minEngineRPM, double maxEngineRPM)
{
    _state = InputDataState::LIMITED;
    _minSpeed = minSpeed;
    _maxSpeed = maxSpeed;
    _minFuelLevel = minFuelLevel;
    _maxFuelLevel = maxFuelLevel;
    _minTemperature = minTemperature;
    _maxTemperature = maxTemperature;
    _minEngineRPM = minEngineRPM;
    _maxEngineRPM = maxEngineRPM;
}

CarDataOptions::CarDataOptions(double speed, double fuelLevel, double temperature, double engineRPM)
{
    _state = InputDataState::CONCRETE;
    _maxSpeed = speed;
    _maxFuelLevel = fuelLevel;
    _maxTemperature = temperature;
    _maxEngineRPM = engineRPM;

}
