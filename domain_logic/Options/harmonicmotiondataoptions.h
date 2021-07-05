#ifndef HARMONICMOTIONDATAOPTIONS_H
#define HARMONICMOTIONDATAOPTIONS_H

#include "dataoptions.h"

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define HARMONIC_DATA_OPTIONS_EXPORT Q_DECL_EXPORT
#else
#  define HARMONIC_DATA_OPTIONS_EXPORT Q_DECL_IMPORT
#endif

struct HARMONIC_DATA_OPTIONS_EXPORT HarmonicMotionDataOptions : public DataOptions
{
private:
    double _minAmplitude;
    double _maxAmplitude;
    double _minCyclicFrequency;
    double _maxCyclicFrequency;
    double _minPhase;
    double _maxPhase;
public:
    HarmonicMotionDataOptions(double, double, double, double, double, double);
    HarmonicMotionDataOptions(double, double, double);
    double getMinAmplitude() const;
    double getMaxAmplitude() const;
    double getMinCyclicFrequency() const;
    double getMaxCyclicFrequency() const;
    double getMinPhase() const;
    double getMaxPhase() const;
};

#endif // HARMONICMOTIONDATAOPTIONS_H
