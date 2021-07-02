#include "carcontroller.h"

namespace controllers
{
    CarController::CarController(int step, int duration)
    {
        _validator = new CarValidator();

        if(!_validator->validateTime(duration, step))
            throw std::invalid_argument("Incorrect time parameters.");

        _step = step;
        _duration = duration;

        int count = duration / step;
        _data = new CarData(count);
    }

    CarController::~CarController() { }

    void CarController::initialize()
    {
        if(0)
        //if(!ui->randomize_checkbox->isChecked())
        {            
            double maxFuelLevel = 1.0;
            //double maxFuelLevel = ui->max_fuelLevel_spinbox->value();
            double maxRotationalSpeed = 1.0;
            // double maxRotationalSpeed =  ui->max_rpm_spinbox->value();
            double maxTemperature = 1.0;
            //double maxTemperature =  ui->max_temperature_spinbox->value();
            double maxSpeed = 1.0;
            // double maxSpeed = ui->max_speed_spinbox->value();
            if(1)
            //if(ui->domain_radiobutton->isChecked())
            {
                double minFuelLevel = 1.0;
                //double minFuelLevel = ui->min_fuelLevel_spinbox->value();
                double minRotationalSpeed = 1.0;
                // double minRotationalSpeed =  ui->min_rpm_spinbox->value();
                double minTemperature = 1.0;
                //double minTemperature =  ui->min_temperature_spinbox->value();
                double minSpeed = 1.0;
                // double minSpeed = ui->min_speed_spinbox->value();

                validate("\"Fuel level\"", CarValidator::validateFuelLevel, maxFuelLevel, minFuelLevel);
                validate("\"RPM\"", CarValidator::validateEngineRPM, maxRotationalSpeed, minRotationalSpeed);
                validate("\"Temperature\"", CarValidator::validateEngineTemperature, maxTemperature, minTemperature);
                validate("\"Speed\"", CarValidator::validateSpeed, maxSpeed, minSpeed);

                //_generator = new CarDataGenerator(_step, minSpeed, maxSpeed, minFuelLevel, maxFuelLevel, minTemperature, maxTemperature, minRotationalSpeed, maxRotationalSpeed);
            }
            else
            {
                validate("\"Fuel level\"", CarValidator::validateFuelLevel, maxFuelLevel);
                validate("\"RPM\"", CarValidator::validateEngineRPM, maxRotationalSpeed);
                validate("\"Temperature\"", CarValidator::validateEngineTemperature, maxTemperature);
                validate("\"Speed\"", CarValidator::validateSpeed, maxSpeed);

                //_generator = new CarDataGenerator(_step, maxSpeed, maxFuelLevel, maxTemperature, maxRotationalSpeed);
            }
        }
        else
           _generator = new CarDataGenerator(_step);
    }
} // namespace controllers



