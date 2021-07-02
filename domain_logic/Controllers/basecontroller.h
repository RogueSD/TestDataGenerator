#ifndef CONTROLLERS_BASECONTROLLER_H
#define CONTROLLERS_BASECONTROLLER_H

#include "stub.h"
#include "../DataStorage/data.h"
#include "../Validators/validator.h"
#include <stdexcept>

namespace controllers
{
    class BaseController
    {
    protected:
        Validator* _validator;
        Data* _data;
        DataGenerator* _generator;
        int _step, _duration;

        void validate(const char*, bool(*)(double), double, double);
        void validate(const char*, bool(*)(double), double);
        virtual void initialize() = 0;
        void simulate();
    public:
        BaseController();
        virtual ~BaseController();
        Data* collectData();
    };
} // namespace Controllers

#endif // CONTROLLERS_BASECONTROLLER_H
