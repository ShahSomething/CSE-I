#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int t1,t2;
    float u,a;
    cout << "Initial Velocity (m/s): ";
    //Input value of u
    cin>>u;
    cout<<"\nAcceleration (m/s^2): ";
    //Input value of a
    cin>>a;
    cout<<"\nTime interval: \n";
    cout<<"t1 (s): ";
    //Input value of t1
    cin>>t1;
    cout<<"t2 (s): ";
    //Input value of t2
    cin>>t2;
    //Formula for d1
    float d1 = (u*t1)+(0.5*a*t1*t1);
    //Formula for d2
    float d2 = (u*t2)+(0.5*a*t2*t2);
    //Formula for d
    float d = d2-d1;
    //Display distance covered in given time interval
    cout<<"Distance Traveled (m): "<<d;
    return 0;
}
