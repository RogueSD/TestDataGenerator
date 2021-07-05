#ifndef HARMONICMOTIONDATA_H
#define HARMONICMOTIONDATA_H

#include "data.h"
#include <qvector.h>
#include "../data/HarmonicMotionDataGenerator.h"

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define HARMONIC_DATA_EXPORT Q_DECL_EXPORT
#else
#  define HARMONIC_DATA_EXPORT Q_DECL_IMPORT
#endif


struct HARMONIC_DATA_EXPORT HarmonicMotionData : public Data
{
public:
    QVector<double>* phaseData;

    HarmonicMotionData(int);
    HarmonicMotionData(const HarmonicMotionData&);
    ~HarmonicMotionData();

    void collect(DataGenerator*) override;
    Data* clone() override;
};

#endif // HARMONICMOTIONDATA_H
