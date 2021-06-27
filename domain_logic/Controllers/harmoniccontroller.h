#ifndef CONTROLLERS_HARMONICCONTROLLER_H
#define CONTROLLERS_HARMONICCONTROLLER_H

#include "basecontroller.h"
#include "../DataStorage/harmonicdata.h"
#include "stub.h"


namespace controllers {

class HarmonicController : public BaseController
{
private:
    HarmonicData* _data;
    HarmonicDataGenerator* _generator;
    void simulate() override;
public:
    HarmonicController(int, int);
    Data* collectData() override;
};

} // namespace Controllers

#endif // CONTROLLERS_HARMONICCONTROLLER_H
