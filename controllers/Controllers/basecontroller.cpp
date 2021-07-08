#include "basecontroller.h"
#include <stdexcept>

namespace controllers
{
    BaseController::BaseController() { }

    BaseController::~BaseController()
    {
        delete _generator;
        delete _data;
        delete _validator;
    }

    void BaseController::validate(const char* paramName, bool(*validation)(double), double value)
    {
        if(!validation(value))
        {
            std::string message = std::string(paramName) + "is out of range.";
            throw std::invalid_argument(message);
        }
    }

    void BaseController::validate(const char* paramName, bool(*validation)(double), double max, double min)
    {
        if(!_validator->compare(min, max))
        {
            std::string message = std::string(paramName) + " has incorrect range of definition.";
            throw std::invalid_argument(message);
        }
        if(!(validation(min) && validation(max)))
        {
            std::string message = std::string(paramName) + "is out of range.";
            throw std::invalid_argument(message);
        }
    }

    void BaseController::simulate()
    {
        size_t count = _duration / _step;

        for(size_t i = 0; i < count; i++)
        {
            _generator->compute();
            _data->collect(_generator);
        }
    }

    Data* BaseController::collectData()
    {
        initialize();
        simulate();
        return _data->clone();
    }
}
