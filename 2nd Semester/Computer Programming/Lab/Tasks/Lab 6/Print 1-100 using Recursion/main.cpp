#include <iostream>

using namespace std;

int counter=0; //Global variable

int numbers() //Function definition
{
    counter++; //Increment counter
    cout<<counter<<"   "; //Display counter
    if(counter==100) //Function ends when counter=100
        return 0;
    else //Recursion
        numbers();
}

int main()
{
    numbers(); //Function Call
    return 0;
}
