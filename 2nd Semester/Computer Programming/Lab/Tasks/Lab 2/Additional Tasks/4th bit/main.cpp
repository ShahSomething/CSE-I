#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num;//integer
    bool a;//boolean
    //Prompt the user to enter num
    cout << "Enter the number: ";
    cin>>num;
    //white spacing
    cout<<endl;
    //Operations
    a=num|4294967287;
    a=~a;
    //NOT of 4th bit
    cout<<"NOT of 4th bit= " << a ;
    return 0;
}
