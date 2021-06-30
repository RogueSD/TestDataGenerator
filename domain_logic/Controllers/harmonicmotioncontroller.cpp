#include "harmonicmotioncontroller.h"

namespace controllers
{
    HarmonicMotionController::HarmonicMotionController(int step, int duration)
    {
        _count = duration / step;
        _data = new HarmonicMotionData(_count);
        _generator = new HarmonicMotionDataGenerator(step); // заглушка
    }

    HarmonicMotionController::~HarmonicMotionController()
    {
        delete _generator;
        delete _data;
    }

    void HarmonicMotionController::simulate()
    {
        for(int i = 0; i < _count; i++)
        {
            _generator->compute();
            _data->collect(_generator);
        }
    }

    Data* HarmonicMotionController::collectData()
    {
        simulate();
        Data* data = new HarmonicMotionData(*_data);
        return data;
    }
} // namespace controllers
