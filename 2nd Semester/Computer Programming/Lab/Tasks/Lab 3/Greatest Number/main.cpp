#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    int A,B,C;
    cout << "Enter the value of A: ";
    //Input value of A
    cin>>A;
    cout << "Enter the value of B: ";
    //Input value of B
    cin>>B;
    cout << "Enter the value of C: ";
    //Input value of C
    cin>>C;
    //White spacing
    cout<<"\n\n";
    //When A is the greatest number
    if (A>B && A>C)
        cout<<"A is the greatest number";
    //When B is the greatest number
    else if (B>A && B>C)
        cout<< "B is the greatest number";
    //When C is the greatest number
    else if (C>A && C>B)
        cout << "C is the greatest number";
    //When A and B are equal and greatest
    else if (A==B && A>C)
        cout << "A and B are equal and greatest";
    //When A and C are equal and greatest
    else if (A==C && A>B)
        cout << "A and C are equal and greatest";
    //When B and C are equal and greatest
    else if (B==C && B>A)
        cout << "B and C are equal and greatest";
    //When A,B and C have equal values
    else
        cout << "All values are equal";
    return 0;
}
