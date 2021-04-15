#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    float num;
    cout << "Enter the magnitude of Earth-quake: ";
    //Input the value of num
    cin>>num;
    //White spacing
    cout<<"\n";
    //Condition for Micro earthquake
    if(num<2)
        cout<<"A magnitude "<< num <<" earthquake is considered to be a Micro earthquake.";
    //Condition for Minor earthquake
    else if(num<4)
        cout<<"A magnitude "<< num <<" earthquake is considered to be a Minor earthquake.";
    //Condition for Light earthquake
    else if (num<5)
        cout<<"A magnitude "<< num <<" earthquake is considered to be a Light earthquake.";
    //Condition for Moderate earthquake
    else if (num<6)
        cout<<"A magnitude "<< num <<" earthquake is considered to be a Moderate earthquake.";
    //Condition for Major earthquake
    else if (num<8)
        cout<<"A magnitude "<< num <<" earthquake is considered to be a Major earthquake.";
    //Condition for Great earthquake
    else if (num<10)
        cout<<"A magnitude "<< num <<" earthquake is considered to be a Great earthquake.";
    //Condition for Meteoric earthquake
    else
        cout<<"A magnitude "<< num <<" earthquake is considered to be a Meteoric earthquake.";
    return 0;
}
