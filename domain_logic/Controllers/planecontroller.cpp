#include "planecontroller.h"

namespace controllers
{
    PlaneController::PlaneController(int step, int duration)
    {
        _count = duration / step;
        _data = new PlaneData(_count);
        _generator = new PlaneDataGenerator(); // заглушка
    }

    PlaneController::~PlaneController()
    {
        delete _generator;
        delete _data;
    }

    void PlaneController::simulate()
    {
        for(int i = 0; i < _count; i++)
        {
            _generator->compute();
            _data->collect(_generator);
        }
    }

    Data* PlaneController::collectData()
    {
        simulate();
        Data* data = new PlaneData(*_data);
        return data;
    }

} // namespace controllers
