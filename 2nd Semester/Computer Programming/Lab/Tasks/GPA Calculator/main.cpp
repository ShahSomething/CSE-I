#include <iostream>

using namespace std;

int main()
{
    int credit_hour;
    int denominator=0;
    char grade,ch;
    float GPA,CGPA;
    float nominator=0.00;
    do
    {
        cout<<"Enter 00 to calculate GPA or Enter Grade: ";
        cin>>grade>>ch;
        if(grade=='0')
            break;
        if((grade!='A'&& grade!='B'&& grade!='C'&& grade!='D'&& grade!='F')&&(ch!='0'&& ch!='+'&& ch!='-'))
            cout<<"Invalid grade";
        cout<<"Enter the credit hour: ";
        cin>>credit_hour;
        switch(grade)
        {
        case 'A':
            if(ch=='0')
                GPA=4.00;
            else
                GPA=3.67;
            break;
        case 'B':
            if (ch=='+')
                GPA=3.33;
            else if(ch=='0')
                GPA=3.00;
            else
                GPA=2.67;
            break;
        case 'C':
            if (ch=='+')
                GPA=2.33;
            else if(ch=='0')
                GPA=2.00;
            else
                GPA=1.67;
            break;
        case 'D':
            if (ch=='+')
                GPA=1.33;
            else
                GPA=1.00;
            break;
        case 'F':
            GPA=0.00;
            break;
        }
        nominator=nominator+(GPA*credit_hour);
        denominator=denominator+credit_hour;
    }while(1);
    CGPA=nominator/denominator;
    cout<<"Your GPA is: "<<CGPA;
    return 0;
}
