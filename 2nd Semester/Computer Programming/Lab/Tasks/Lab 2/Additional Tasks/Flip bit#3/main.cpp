#include <iostream>

using namespace std;

int main()
{
    //variable declaration
    int num,a;
    //Read num
    cout << "Enter a number: " ;
    cin>>num;
    //white spacing
    cout<<endl;
    //Flipping process
    a=num^4;
    //Display a
    cout<<"After the 3rd bit is flipped, num= "<< a <<endl;
    return 0;
}
