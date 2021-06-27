#include "harmoniccontroller.h"

namespace controllers {

HarmonicController::HarmonicController(int deltaTime, int duration)
{
    _count = duration / deltaTime;
    _data = new HarmonicData(_count);
    _generator = new HarmonicDataGenerator(); // заглушка
}

void HarmonicController::simulate()
{
    //Сбор начальных данных
    _data->collect(_generator);

    for(int i = 0; i < _count; i++)
    {
        _generator->compute();
        _data->collect(_generator);
    }
}

Data* HarmonicController::collectData()
{
    simulate();
    return _data;
}

} // namespace Controllers
