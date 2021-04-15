#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num=rand();
    int guess,counter=0;
    cout << "Guess the number: "; //Display message
    cin>>guess; //Input guess
    while(guess!=num) //Repeat Loop if guess is not equal to num
    {
        counter++; //Increment counter
        if(guess<num) //Guess is less than num
        {
            cout<<"Guess again with a higher number: "; //Display message
            cin>>guess; //Input guess
        }
        else //Guess is greater than num
        {
            cout<<"Guess again with a lower number: "; //Display message
            cin>>guess; //Input num
        }
    }
    counter++; //Increment counter
    cout<<"You Win\n"; //Display message
    cout<<"Number of tries: "<<counter; //Display number of tries
    return 0;
}
