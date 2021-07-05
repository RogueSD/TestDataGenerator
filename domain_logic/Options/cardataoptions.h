#ifndef CARDATAOPTIONS_H
#define CARDATAOPTIONS_H

#if defined(DOMAIN_LOGIC_LIBRARY)
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
    CarDataOptions(double, double, double, double, double, double, double, double);
    CarDataOptions(double, double, double, double);
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
