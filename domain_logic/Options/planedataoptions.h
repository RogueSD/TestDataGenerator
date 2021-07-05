#ifndef PLANEDATAOPTIONS_H
#define PLANEDATAOPTIONS_H

#if defined(DOMAIN_LOGIC_LIBRARY)
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
    PlaneDataOptions(double, double, double, double, double, double);
    PlaneDataOptions(double, double, double);
    double getMinFuelLevel() const;
    double getMinAltitude() const;
    double getMinAttackAngle() const;
    double getMaxFuelLevel() const;
    double getMaxAltitude() const;
    double getMaxAttackAngle() const;
};

#endif // PLANEDATAOPTIONS_H
