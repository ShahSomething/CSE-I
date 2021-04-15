#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<=255;i++) //Loop runs 256 times
    {
        char ch= i; //Changing code to character
        cout<<i<<": "<<ch<<endl; //Display code with respective character
    }
    return 0;
}
