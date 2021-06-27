#define HARMONIC 1
#include "harmonicdata.h"

HarmonicData::HarmonicData(int count)
{
    identity = HARMONIC;
    phaseData = new QVector<double>(count);
}

void HarmonicData::collect(HarmonicDataGenerator* generator)
{
    phaseData->push_back(generator->getPhase());
}
