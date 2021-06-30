#include "carcontroller.h"
#include "../DataStorage/cardata.h"

namespace controllers
{
    CarController::CarController(int step, int duration)
    {
        _count = duration / step;
        _data = new CarData(_count);
        _generator = new CarDataGenerator(step); // заглушка
    }

    CarController::~CarController()
    {
        delete _generator;
        delete _data;
    }

    void CarController::simulate()
    {
        for(int i = 0; i < _count; i++)
        {
            _generator->compute();
            _data->collect(_generator);
        }
    }

    Data* CarController::collectData()
    {
        simulate();
        Data* data = new CarData(*_data);
        return data;
    }

} // namespace controllers
