#include <iostream>

using namespace std;

int main()
{
    int num,i=1; //Variable declaration
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    cout<<"                 Multiplication    Table:      \n";
    while(i<=10) //Repeat 10 times
    {
        cout<<num<<"  X  "<<i<<"  =  "<<num*i<<endl; //Multiplication Table
        i++; //Increment i
    }
    return 0;
}
