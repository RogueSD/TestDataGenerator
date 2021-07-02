#ifndef HARMONICMOTIONDATA_H
#define HARMONICMOTIONDATA_H

#include "data.h"
#include <qvector.h>
#include "stub.h"

struct HarmonicMotionData : public Data
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
