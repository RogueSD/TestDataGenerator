#include "planecontroller.h"
#include "../generators/PlaneDataGenerator.h"

namespace controllers
{
    PlaneController::PlaneController(double step, int duration)
    {
        _validator = new PlaneValidator();

        if(!_validator->validateTime(duration, step))
            throw std::invalid_argument("Incorrect time parameters.");

        _step = step;
        _duration = duration;

        size_t count = duration / step;
        _data = new PlaneData(count);
        _options = nullptr;
    }

    PlaneController::~PlaneController()
    {
        delete _options;
    }

    void PlaneController::configureGenerator(DataOptions *options)
    {
        PlaneDataOptions* planeOptions = dynamic_cast<PlaneDataOptions*>(options);

        if(planeOptions)
            _options = new PlaneDataOptions(*planeOptions);
        else
            throw std::invalid_argument("Incorrect configuration!");
    }

    void PlaneController::initialize()
    {
        if(_options)
        {
            double maxFuelLevel = _options->getMaxFuelLevel();
            double maxAltitude = _options->getMaxAltitude();
            double maxAttackAngle = _options->getMaxAttackAngle();

            if(_options->state() == InputDataState::LIMITED)
            {
                double minFuelLevel = _options->getMinFuelLevel();
                double minAltitude = _options->getMinAltitude();
                double minAttackAngle = _options->getMinAttackAngle();

                validate("\"Fuel level\"", PlaneValidator::validateFuelLevel, maxFuelLevel, minFuelLevel);
                validate("\"Altitude\"", PlaneValidator::validateAltitude, maxAltitude, minAltitude);
                validate("\"Attack angle\"", PlaneValidator::validateAttackAngle, maxAttackAngle, minAttackAngle);

                _generator = new PlaneDataGenerator(_step, minFuelLevel, maxFuelLevel, minAltitude, maxAltitude, minAttackAngle, maxAttackAngle);
            }
            else
            {
                validate("\"Fuel level\"", PlaneValidator::validateFuelLevel, maxFuelLevel);
                validate("\"Altitude\"", PlaneValidator::validateAltitude, maxAltitude);
                validate("\"Attack angle\"", PlaneValidator::validateAttackAngle, maxAttackAngle);

                _generator = new PlaneDataGenerator(_step, maxFuelLevel, maxAltitude, maxAttackAngle);
            }
        }
        else
           _generator = new PlaneDataGenerator(_step);
    }

} // namespace controllers
