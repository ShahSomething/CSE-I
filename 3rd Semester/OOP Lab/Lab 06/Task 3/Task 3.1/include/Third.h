#ifndef THIRD_H
#define THIRD_H

#include <Second.h>


class Third : public Second
{
    public:
        void t_input();
        void Max();
        void Show();
    protected:
        int t;
};

#endif // THIRD_H
