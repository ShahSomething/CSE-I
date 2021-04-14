#include <iostream>/* library for writing
the output to console window*/

using namespace std;

int main()
{
    float F,C,K;//variables declaration
    cout << "Enter temperature in Fahrenheit" << endl;
    cin>>F; //Temperature in Fahrenheit
    /*calculation using
    mathematical formula*/
    C=(F-32)/1.8;
    K=C+273;
    cout << "Temperature in Celsius= " << C << endl;
    cout << "Temperature in Kelvin= " << K << endl;
    return 0;
}
