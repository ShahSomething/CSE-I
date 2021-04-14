#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num;
    cout << "Enter a number: " << endl;
    //Input value of num
    cin>>num;
    (num%5==0 && num%7==0 && num%11!=0)?cout<<"This is the desired number":cout<<"This number does not satisfy all the conditions";
    return 0;
}
