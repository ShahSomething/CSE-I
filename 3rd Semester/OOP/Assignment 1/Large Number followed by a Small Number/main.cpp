#include <iostream>
#define SIZE 20
using namespace std;


class Array
{
private:
    int A[SIZE];
public:
    void input()
    {
       for(int i=0;i<SIZE;i++)
            cin>>A[i];
    }
    int L_followed_by_S()
    {
        int counter=0;
        for(int i=0;i<SIZE-1;i++)
        {
           if(A[i]>A[i+1])
                counter++;
        }
        return counter;
    }
};

int main()
{
    Array A;
    cout<<"Enter the Array of Integers: ";
    A.input();
    cout<<"Number of time a Larger number followed by a smaller one: "<<A.L_followed_by_S();
    return 0;
}
