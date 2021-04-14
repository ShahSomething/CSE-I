#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num;
    cout << "Enter the number: ";
    //Input value of num
    cin>>num;
    //One line space
    cout<<"\n";
    //Determining even or odd using ternary operator
    (num%2==0)? (cout << "This is an even number"):(cout<<"This is an odd number");
    return 0;
}
