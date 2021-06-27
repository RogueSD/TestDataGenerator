#ifndef STUB_H
#define STUB_H

class DataGenerator
{
public:
    virtual void compute()
    {

    }
};

class HarmonicDataGenerator : public DataGenerator
{
public:
    HarmonicDataGenerator()
    {

    }
    void compute() override
    {

    }
    double getPhase()
    {
        return 0.0;
    }
};

#endif // STUB_H
