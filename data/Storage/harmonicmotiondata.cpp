#define HARMONIC 1
#include "harmonicmotiondata.h"

HarmonicMotionData::HarmonicMotionData()
{
    identity = HARMONIC;
}

HarmonicMotionData::HarmonicMotionData(size_t count)
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

Data* HarmonicMotionData::clone()
{
    return new HarmonicMotionData(*this);
}

void HarmonicMotionData::collect(DataGenerator* generator)
{
    HarmonicMotionDataGenerator* cast_generator = static_cast<HarmonicMotionDataGenerator*>(generator);

    phaseData->push_back(cast_generator->getX());
}
