#include "harmonicmotiondataoptions.h"

double HarmonicMotionDataOptions::getMinAmplitude() const
{
    return _minAmplitude;
}

double HarmonicMotionDataOptions::getMaxAmplitude() const
{
    return _maxAmplitude;
}

double HarmonicMotionDataOptions::getMinCyclicFrequency() const
{
    return _minCyclicFrequency;
}

double HarmonicMotionDataOptions::getMaxCyclicFrequency() const
{
    return _maxCyclicFrequency;
}

double HarmonicMotionDataOptions::getMinPhase() const
{
    return _minPhase;
}

double HarmonicMotionDataOptions::getMaxPhase() const
{
    return _maxPhase;
}

HarmonicMotionDataOptions::HarmonicMotionDataOptions(double minAmplitude, double maxAmplitude,
                                                     double minCyclicFrequency, double maxCyclicFrequency,
                                                     double minPhase, double maxPhase)
{
    _state = InputDataState::LIMITED;
    _minAmplitude = minAmplitude;
    _maxAmplitude = maxAmplitude;
    _minCyclicFrequency = minCyclicFrequency;
    _maxCyclicFrequency = maxCyclicFrequency;
    _minPhase = minPhase;
    _maxPhase = maxPhase;
}

HarmonicMotionDataOptions::HarmonicMotionDataOptions(double amplitude, double cyclicFrequency, double phase)
{
    _state = InputDataState::CONCRETE;
    _maxAmplitude = amplitude;
    _maxCyclicFrequency = cyclicFrequency;
    _maxPhase = phase;
}
