#include "planecontroller.h"

namespace controllers
{
    PlaneController::PlaneController(int step, int duration)
    {
        _validator = new PlaneValidator();

        if(!_validator->validateTime(duration, step))
            throw std::invalid_argument("Incorrect time parameters.");

        _step = step;
        _duration = duration;

        int count = duration / step;
        _data = new PlaneData(count);
    }

    PlaneController::~PlaneController() { }

    void PlaneController::initialize()
    {
        if(0)
        //if(!ui->randomize_checkbox->isChecked())
        {
            double maxFuelLevel = 1.0;
            //double maxFuelLevel = ui->max_fuelLevel_spinbox->value();
            double maxAltitude = 1.0;
            // double maxAltitude =  ui->max_altitude_spinbox->value();
            double maxAttackAngle = 1.0;
            //double maxAttackAngle =  ui->max_attackAngle_spinbox->value();

            if(1)
            //if(ui->domain_radiobutton->isChecked())
            {
                double minFuelLevel = 1.0;
                //double minFuelLevel = ui->min_fuelLevel_spinbox->value();
                double minAltitude = 1.0;
                // double minAltitude =  ui->min_altitude_spinbox->value();
                double minAttackAngle = 1.0;
                //double minAttackAngle =  ui->min_attackAngle_spinbox->value();

                validate("\"Fuel level\"", PlaneValidator::validateFuelLevel, maxFuelLevel, minFuelLevel);
                validate("\"Altitude\"", PlaneValidator::validateAltitude, maxAltitude, minAltitude);
                validate("\"Attack angle\"", PlaneValidator::validateAttackAngle, maxAttackAngle, minAttackAngle);

                //_generator = new PlaneDataGenerator(_step, minFuelLevel, maxFuelLevel, minAltitude, maxAltitude, minAttackAngle, maxAttackAngle);
            }
            else
            {
                validate("\"Fuel level\"", PlaneValidator::validateFuelLevel, maxFuelLevel);
                validate("\"Altitude\"", PlaneValidator::validateAltitude, maxAltitude);
                validate("\"Attack angle\"", PlaneValidator::validateAttackAngle, maxAttackAngle);

                //_generator = new PlaneDataGenerator(_step, maxFuelLevel, maxAltitude, maxAttackAngle);
            }
        }
        else
           _generator = new PlaneDataGenerator(_step);
    }

} // namespace controllers
