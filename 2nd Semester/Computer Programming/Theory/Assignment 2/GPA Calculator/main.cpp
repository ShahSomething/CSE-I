#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num,credit_hour;
    char ch,grade,a;
    float gpa,nominator=0,denominator=0,cgpa;
    do //Loop
    {
        cout << "Enter number of subjects: "; //Display message
        cin>>num; //Input num
        int subject_number=0;
        for(int i=1;i<=num;num--)
        {
            subject_number++;
            cout<<"Enter your Grade in subject #"<<subject_number<<": "; //Display message
            cin>>grade>>a; //Input grade and a(+,-,0)
            switch(grade)
            {
            case 'A':
                if(a=='0')
                    gpa=4.00;
                else if(a=='-')
                    gpa=3.67;
                else
                    cout<<"Invalid Grade";
                break;
            case 'B':
                if(a=='+')
                    gpa=3.33;
                else if (a=='0')
                    gpa=3.00;
                else if(a=='-')
                    gpa=2.67;
                else
                    cout<<"Invalid Grade";
                break;
            case 'C':
                if(a=='+')
                    gpa=2.33;
                else if (a=='0')
                    gpa=2.00;
                else if(a=='-')
                    gpa=1.67;
                else
                    cout<<"Invalid Grade";
                break;
            case 'D':
                if(a=='+')
                    gpa=1.33;
                else if (a=='0')
                    gpa=1.00;
                else
                    cout<<"Invalid Grade";
                break;
            case 'F':
                gpa=0.00;
                break;
            default:
                cout<<"Invalid Grade";
            }
            cout<<"Credit hour(s) of subject #"<<subject_number<<" :"; //Display message
            cin>>credit_hour; //Input credit_hour
            //calculations
            nominator=nominator+(gpa*credit_hour);
            denominator=denominator+credit_hour;
            cgpa=nominator/denominator;
        }
        cout<<"Your GPA is: "<<cgpa<<"\n"; //Display message
        cout<<"Is there another student who want to calculate their GPA? (Y/N) "; //Display message
        cin>>ch; //Input ch(Y/N)
    }while(ch!='n'&& ch!='N');
    return 0;
}
