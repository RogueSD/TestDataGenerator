#include "carcontroller.h"

namespace controllers
{
    CarController::CarController(double step, int duration)
    {
        _validator = new CarValidator();

        if(!(_validator->validateTime(duration, step)))
            throw std::invalid_argument("Incorrect time parameters.");

        _step = step;
        _duration = duration;

        size_t count = duration / step;
        _data = new CarData(count);
        _options = nullptr;
    }

    CarController::~CarController()
    {
        delete _options;
    }

    void CarController::configureGenerator(DataOptions *options)
    {
        CarDataOptions* carOptions = dynamic_cast<CarDataOptions*>(options);

        if(carOptions)
            _options = new CarDataOptions(*carOptions);
        else
            throw std::invalid_argument("Incorrect configuration!");
    }

    void CarController::initialize()
    {
        if(_options)
        {            
            double maxFuelLevel = _options->getMaxFuelLevel();
            double maxRotationalSpeed = _options->getMaxEngineRPM();
            double maxTemperature = _options->getMaxTemperature();
            double maxSpeed = _options->getMaxSpeed();

            if(_options->state() == InputDataState::LIMITED)
            {
                double minFuelLevel = _options->getMinFuelLevel();
                double minRotationalSpeed = _options->getMinEngineRPM();
                double minTemperature = _options->getMinTemperature();
                double minSpeed = _options->getMinSpeed();

                validate("\"Fuel level\"", CarValidator::validateFuelLevel, maxFuelLevel, minFuelLevel);
                validate("\"RPM\"", CarValidator::validateEngineRPM, maxRotationalSpeed, minRotationalSpeed);
                validate("\"Temperature\"", CarValidator::validateEngineTemperature, maxTemperature, minTemperature);
                validate("\"Speed\"", CarValidator::validateSpeed, maxSpeed, minSpeed);

                _generator = new CarDataGenerator(_step, minSpeed, maxSpeed, minFuelLevel, maxFuelLevel, minTemperature, maxTemperature, minRotationalSpeed, maxRotationalSpeed);
            }
            else
            {
                validate("\"Fuel level\"", CarValidator::validateFuelLevel, maxFuelLevel);
                validate("\"RPM\"", CarValidator::validateEngineRPM, maxRotationalSpeed);
                validate("\"Temperature\"", CarValidator::validateEngineTemperature, maxTemperature);
                validate("\"Speed\"", CarValidator::validateSpeed, maxSpeed);

                _generator = new CarDataGenerator(_step, maxSpeed, maxFuelLevel, maxTemperature, maxRotationalSpeed);
            }
        }
        else
           _generator = new CarDataGenerator(_step);
    }
} // namespace controllers



