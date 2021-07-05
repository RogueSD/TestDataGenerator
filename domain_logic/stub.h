#ifndef STUB_H
#define STUB_H
#include "domain_logic_global.h"
#include "../data/DataGenerator.h"

//class DataGenerator
//{
//public:
//    virtual void compute()
//    {

//    }
//    virtual ~DataGenerator()
//    {

//    }
//};

//class HarmonicMotionDataGenerator : public DataGenerator
//{
//public:
//    HarmonicMotionDataGenerator(int) { }
//    ~HarmonicMotionDataGenerator() { }

//    void compute() override { }
//    double getPhase()
//    {
//        return 0.0;
//    }

//};

//class CarDataGenerator : public DataGenerator
//{
//public:
//    CarDataGenerator(int) { }
//    ~CarDataGenerator() { }

//    void compute() override { }
//    double getFuelLevel()
//    {
//        return 0.0;
//    }
//    double getSpeed()
//    {
//        return 0.0;
//    }
//    double getTemperature()
//    {
//        return 0.0;
//    }
//    int getRotationalSpeed()
//    {
//        return 0;
//    }
//};

class PlaneDataGenerator : public DataGenerator
{
public:
    PlaneDataGenerator(int) { }
    ~PlaneDataGenerator() { }

    void compute() override { }

    double getAltitude()
    {
        return 0.0;
    }
    double getFuelLevel()
    {
        return 0.0;
    }
    double getAttackAngle()
    {
        return 0.0;
    }
};

#endif // STUB_H
