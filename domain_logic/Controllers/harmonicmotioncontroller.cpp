#include "harmonicmotioncontroller.h"

namespace controllers
{
    HarmonicMotionController::HarmonicMotionController(int step, int duration)
    {
        _validator = new HarmonicMotionValidator();

        if(!_validator->validateTime(duration, step))
            throw std::invalid_argument("Incorrect time parameters.");

        _step = step;
        _duration = duration;

        int count = duration / step;
        _data = new HarmonicMotionData(count);
    }

    HarmonicMotionController::~HarmonicMotionController() { }

    void HarmonicMotionController::initialize()
    {
        if(0)
        //if(!ui->randomize_checkbox->isChecked())
        {
            double maxAmplitude = 1.0;
            //double maxAmplitude = ui->max_amplitude_spinbox->value();
            double maxCyclicFrequency = 1.0;
            //double maxCyclicFrequency = ui->max_freq_spinbox->value();

            if(1)
            //if(ui->domain_radiobutton->isChecked())
            {
                double minAmplitude = 1.0;
                //double minAmplitude = ui->min_amplitude_spinbox->value();
                double minCyclicFrequency = 1.0;
                //double minCyclicFrequency = ui->min_freq_spinbox->value();

                validate("\"Amplitude\"", HarmonicMotionValidator::validateAmplitude, maxAmplitude, minAmplitude);
                validate("\"Cyclic frequency\"", HarmonicMotionValidator::validateCyclicFrequency, maxCyclicFrequency, minCyclicFrequency);

                //_generator = new HarmonicMotionDataGenerator(step, minAmplitude, maxAmplitude, minCyclicFrequency, maxCyclicFrequency);
            }
            else
            {
                validate("\"Amplitude\"", HarmonicMotionValidator::validateAmplitude, maxAmplitude);
                validate("\"Cyclic frequency\"", HarmonicMotionValidator::validateCyclicFrequency, maxCyclicFrequency);

                //_generator = new HarmonicMotionDataGenerator(step, maxAmplitude, maxCyclicFrequency);
            }
        }
        else
           _generator = new HarmonicMotionDataGenerator(_step);
    }
} // namespace controllers
