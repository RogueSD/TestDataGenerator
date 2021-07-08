#include "planedataoptions.h"

double PlaneDataOptions::getMinFuelLevel() const
{
    return _minFuelLevel;
}

double PlaneDataOptions::getMinAltitude() const
{
    return _minAltitude;
}

double PlaneDataOptions::getMinAttackAngle() const
{
    return _minAttackAngle;
}

double PlaneDataOptions::getMaxFuelLevel() const
{
    return _maxFuelLevel;
}

double PlaneDataOptions::getMaxAltitude() const
{
    return _maxAltitude;
}

double PlaneDataOptions::getMaxAttackAngle() const
{
    return _maxAttackAngle;
}

PlaneDataOptions::PlaneDataOptions(double minFuelLevel,double maxFuelLevel,
                                   double minAltitude,double maxAltitude,
                                   double minAttackAngle, double maxAttackAngle)
{
    _state = InputDataState::LIMITED;
    _minFuelLevel = minFuelLevel;
    _minAltitude = minAltitude;
    _minAttackAngle = minAttackAngle;
    _maxFuelLevel = maxFuelLevel;
    _maxAltitude = maxAltitude;
    _maxAttackAngle = maxAttackAngle;
}
PlaneDataOptions::PlaneDataOptions(double fuelLevel,double altitude,double attackAngle)
{
    _state = InputDataState::CONCRETE;
    _maxFuelLevel = fuelLevel;
    _maxAltitude = altitude;
    _maxAttackAngle = attackAngle;
}
