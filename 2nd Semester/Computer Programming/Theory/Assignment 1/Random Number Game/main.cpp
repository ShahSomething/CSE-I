#include <iostream>

using namespace std;

int main()
{
    //Generate a random number
    int num=rand();
    //Variable declaration
    int guess;
    cout << "Guess the Number: ";
    //This loop runs 3 times
    for(int x=1;x<=3;x++)
    {
        //Input value of guess
        cin>>guess;
        //when guess is greater than num
        if (guess>num)
        {
            //Message displayed when user guess wrong 3 times
            if (x==3)
                cout<<"Game Over!!!";
            //Message displayed when user guess is greater than num
            else
                cout<<"Try again with a LOWER number: ";
        }
        //when guess is less than num
        else if (guess<num)
        {
            //Message displayed when user guess wrong 3 times
            if (x==3)
                cout<<"Game Over!!!";
            //Message displayed when user guess is less than num
            else
                cout<<"Try again with a HIGHER number: ";
        }
        //When guess is equal to num
        else
            cout<<">>>>YOU WIN....!<<<<"<<endl;
    }
    return 0;
}
