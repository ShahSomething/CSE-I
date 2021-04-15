#ifndef POWER_H
#define POWER_H

#include <Base.h>
#include <Exponent.h>


class Power: public Base,Exponent
{
    public:
        Power();
        void in1();
        void show1();

    protected:
        int po;
};

#endif // POWER_H
