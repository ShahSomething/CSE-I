#include <iostream>

using namespace std;


int main()
{
    int Num;
    cout<<"Enter a 5 digits Number: ";
    cin>>Num;
    if(Num%10==Num/10000)
    {
        if((Num%100)/10==(Num/1000)%10)
            cout<<"This is a Palindrome.\n";
        else
            cout<<"This is Not a Palindrome.\n";
    }
    else
        cout<<"This is Not a Palindrome.\n";

    return 0;
}
