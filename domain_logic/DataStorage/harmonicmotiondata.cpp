#define HARMONIC 1
#include "harmonicmotiondata.h"

HarmonicMotionData::HarmonicMotionData(int count)
{
    identity = HARMONIC;
    phaseData = new QVector<double>();
    phaseData->reserve(count);
}

HarmonicMotionData::HarmonicMotionData(const HarmonicMotionData &other)
{
    identity = HARMONIC;
    phaseData = new QVector<double>(*other.phaseData);
}

HarmonicMotionData::~HarmonicMotionData()
{
    delete phaseData;
}

void HarmonicMotionData::collect(HarmonicMotionDataGenerator* generator)
{
    phaseData->push_back(generator->getPhase());
}
