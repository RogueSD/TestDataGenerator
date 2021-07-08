#ifndef CARDATAOPTIONS_H
#define CARDATAOPTIONS_H

#if defined(DATA_LIBRARY)
#  define CAR_DATA_OPTIONS_EXPORT Q_DECL_EXPORT
#else
#  define CAR_DATA_OPTIONS_EXPORT Q_DECL_IMPORT
#endif

#include "dataoptions.h"

struct CAR_DATA_OPTIONS_EXPORT CarDataOptions : public DataOptions
{
private:
    double _minSpeed;
    double _maxSpeed;
    double _minFuelLevel;
    double _maxFuelLevel;
    double _minTemperature;
    double _maxTemperature;
    double _minEngineRPM;
    double _maxEngineRPM;
public:
    CarDataOptions(double minSpeed, double maxSpeed,
                                 double minFuelLevel, double maxFuelLevel,
                                 double minTemperature, double maxTemperature,
                                 double minEngineRPM, double maxEngineRPM);
    CarDataOptions(double speed, double fuelLevel, double temperature, double engineRPM);
    double getMinSpeed() const;
    double getMaxSpeed() const;
    double getMinFuelLevel() const;
    double getMaxFuelLevel() const;
    double getMinTemperature() const;
    double getMaxTemperature() const;
    double getMinEngineRPM() const;
    double getMaxEngineRPM() const;
};

#endif // CARDATAOPTIONS_H
