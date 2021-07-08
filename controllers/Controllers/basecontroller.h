#ifndef CONTROLLERS_BASECONTROLLER_H
#define CONTROLLERS_BASECONTROLLER_H

#include "../validators/validator.h"
#include "../data/Options/dataoptions.h"
#include "../data/Storage/data.h"
#include <stdexcept>

namespace controllers
{
    class BaseController
    {
    protected:
        Validator* _validator;
        Data* _data;
        DataGenerator* _generator;

        double _step;
        int _duration;

        void validate(const char*, bool(*)(double), double, double);
        void validate(const char*, bool(*)(double), double);
        virtual void initialize() = 0;
        void simulate();
    public:
        BaseController();
        virtual ~BaseController();
        virtual void configureGenerator(DataOptions*) = 0;
        Data* collectData();
    };
} // namespace Controllers

#endif // CONTROLLERS_BASECONTROLLER_H
