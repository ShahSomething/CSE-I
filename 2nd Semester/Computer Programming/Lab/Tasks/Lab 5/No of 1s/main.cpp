#include <iostream>

using namespace std;

int number_of_1s (int a) //Definition of number_of_1s function
{
    int counter=0,remainder;
    while(a!=0)
    {
        remainder=a%10;
        if(remainder==1)
            counter++;
        a=a/10;
    }
    return counter;
}
int main()
{
    int num,out; //Variable declaration
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    out= number_of_1s(num); //Calling number_of_1s function
    cout<<"This number contains "<<out<<" 1(s)"; //Display number of 1(s)
    return 0;
}
