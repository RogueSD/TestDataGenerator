#include "harmonicmotioncontroller.h"

namespace controllers
{
    HarmonicMotionController::HarmonicMotionController(double step, int duration)
    {
        _validator = new HarmonicMotionValidator();

        if(!_validator->validateTime(duration, step))
            throw std::invalid_argument("Incorrect time parameters.");

        _step = step;
        _duration = duration;

        size_t count = duration / step;
        _data = new HarmonicMotionData(count);
        _options = nullptr;
    }

    HarmonicMotionController::~HarmonicMotionController()
    {
        delete _options;
    }

    void HarmonicMotionController::configureGenerator(DataOptions *options)
    {
        HarmonicMotionDataOptions* harmonicOptions = dynamic_cast<HarmonicMotionDataOptions*>(options);

        if(harmonicOptions)
            _options = new HarmonicMotionDataOptions(*harmonicOptions);
        else
            throw std::invalid_argument("Incorrect configuration!");
    }

    void HarmonicMotionController::initialize()
    {
        if(_options)
        {
            double maxAmplitude = _options->getMaxAmplitude();
            double maxCyclicFrequency = _options->getMaxCyclicFrequency();
            double maxPhase = _options->getMaxPhase();

            if(_options->state() == InputDataState::LIMITED)
            {
                double minAmplitude = _options->getMinAmplitude();
                double minCyclicFrequency = _options->getMinCyclicFrequency();
                double minPhase = _options->getMinPhase();

                validate("\"Amplitude\"", HarmonicMotionValidator::validateAmplitude, maxAmplitude, minAmplitude);
                validate("\"Cyclic frequency\"", HarmonicMotionValidator::validateCyclicFrequency, maxCyclicFrequency, minCyclicFrequency);

                _generator = new HarmonicMotionDataGenerator(_step, minAmplitude, maxAmplitude, minCyclicFrequency, maxCyclicFrequency, minPhase, maxPhase);
            }
            else
            {
                validate("\"Amplitude\"", HarmonicMotionValidator::validateAmplitude, maxAmplitude);
                validate("\"Cyclic frequency\"", HarmonicMotionValidator::validateCyclicFrequency, maxCyclicFrequency);

                _generator = new HarmonicMotionDataGenerator(_step, maxAmplitude, maxCyclicFrequency, maxPhase);
            }
        }
        else
           _generator = new HarmonicMotionDataGenerator(_step);
    }
} // namespace controllers
