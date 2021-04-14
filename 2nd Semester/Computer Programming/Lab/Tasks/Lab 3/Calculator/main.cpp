#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int A,B,sum,diff,prod,remainder,AND,OR,NOT_a,NOT_b;
    float quotient,avg;
    char OP;
    cout << "Operand1: ";
    //Input value of A
    cin>>A;
    cout << "Operator: ";
    //Input value of OP
    cin>>OP;
    cout << "Operand2: ";
    //Input value of B
    cin>>B;
    //Sum
    sum=A+B;
    //Difference
    diff=A-B;
    //Product
    prod=A*B;
    //Remainder
    remainder=A%B;
    //Division
    quotient=A/B;
    //Average
    avg=sum/2;
    //Bitwise AND
    AND=A&B;
    //Bitwise OR
    OR=A|B;
    //Bitwise NOT
    NOT_a=~A;
    NOT_b=~B;
    //One line space
    cout<<"\n";
    //When operator is +
    if (OP=='+')
        cout << "Result: "<<sum;
    //When operator is -
    else if(OP=='-')
        cout << "Result: "<<diff;
    //When operator is *
    else if(OP=='*')
        cout << "Result: "<<prod;
    //When operator is /
    else if(OP=='/')
        cout << "Result: "<<quotient;
    //When operator is %
    else if(OP=='%')
        cout << "Result: "<<remainder;
    //When operator is A
    else if(OP=='A')
        cout << "Result: "<<avg;
    //When operator is &
    else if(OP=='&')
        cout << "Result: "<<AND;
    //When operator is |
    else if(OP=='|')
        cout << "Result: "<<OR;
    //When operator is ~
    else if(OP=='~')
    {
        cout << "NOT of A: "<<NOT_a<<endl;
        cout << "NOT of B: "<<NOT_b;
    }
    else
        cout<<"Invalid Operator Used!!!\a";
    return 0;
}
