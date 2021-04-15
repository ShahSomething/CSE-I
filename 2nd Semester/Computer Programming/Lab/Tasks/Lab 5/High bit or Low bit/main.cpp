#include <iostream>

using namespace std;

bool bit(int a, int b) //Definition of bit function
{
    a=a>>(b-1);
    bool Bit=a&1;
    return Bit;
}
int main()
{
    int num,bit_number; //Variable declaration
    cout << "Enter a number:"; //Display message
    cin>>num; //Input num
    cout<<"Which bit of "<<num<<" do you want to check? "; //Display message
    cin>>bit_number; //Input bit_number
    cout<<"Bit Number "<<bit_number<<" of "<<num<<" is "<<bit(num,bit_number);
    return 0;
}
