#ifndef PLANEDATAOPTIONS_H
#define PLANEDATAOPTIONS_H

#if defined(DATA_LIBRARY)
#  define PLANE_DATA_OPTIONS_EXPORT Q_DECL_EXPORT
#else
#  define PLANE_DATA_OPTIONS_EXPORT Q_DECL_IMPORT
#endif

#include "dataoptions.h"

struct PLANE_DATA_OPTIONS_EXPORT PlaneDataOptions : public DataOptions
{
private:
    double _minFuelLevel;
    double _minAltitude;
    double _minAttackAngle;
    double _maxFuelLevel;
    double _maxAltitude;
    double _maxAttackAngle;
public:
    PlaneDataOptions(double minFuelLevel,double maxFuelLevel,
                     double minAltitude,double maxAltitude,
                     double minAttackAngle, double maxAttackAngle);
    PlaneDataOptions(double fuelLevel,double altitude,double attackAngle);
    double getMinFuelLevel() const;
    double getMinAltitude() const;
    double getMinAttackAngle() const;
    double getMaxFuelLevel() const;
    double getMaxAltitude() const;
    double getMaxAttackAngle() const;
};

#endif // PLANEDATAOPTIONS_H
