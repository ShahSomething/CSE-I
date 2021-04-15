#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num,counter=0;
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    int a=num;
    //Number of Digits
    while(num!=0) //Loop
    {
        counter++;
        num=num/10;
    }
    cout<<"This number has "<<counter<<" digits\n";
    //Number of bits
    counter=0;
    while(a!=0) //Loop
    {
        counter++;
        a=a>>1;
    }
    cout<<"This number has "<<counter<<" bits\n";
    return 0;
}
