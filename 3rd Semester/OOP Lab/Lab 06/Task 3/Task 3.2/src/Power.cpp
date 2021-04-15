#include "Power.h"
#include<iostream>
using namespace std;
Power::Power()
{
    po=1;
}
void Power::in1()
{
    input_base();
    input_exp();
}
void Power::show1()
{
    show_base();
    show_exp();
    for(int i=0;i<exp;i++)
    {
        po*=ba;
    }
    cout<<"Power: "<<po<<endl;
}
