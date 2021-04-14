#include <iostream>

using namespace std;

int main()
{
    cout << "\t\tMarks Sheet:" << endl;
    //Variable declaration
    int A,B,C,D,E,sum;
    float Percentage,Average;
    cout<<"Marks in Computer Programming: ";
    //Input value of A
    cin>>A;
    cout<<"Marks in English: ";
    //Input value of B
    cin>>B;
    cout<<"Marks in Deferential Equation: ";
    //Input value of C
    cin>>C;
    cout<<"Marks in Circuit and Systems: ";
    //Input value of D
    cin>>D;
    cout<<"Marks in Pakistan Studies: ";
    //Input value of E
    cin>>E;
    //Two line space
    cout<<"\n\n";
    //Formula for sum
    sum = A+B+C+D+E;
    //Formula for Percentage
    Percentage = (sum*100)/100;
    //Formula for Average
    Average = sum/5;
    //When total marks are greater than 100
    if (sum>100)
    {   cout<<"Wrong Entries";

    }
    //When marks are less than or equal to 100
    else
    {
        //Display Percentage
        cout<<"Percentage: "<<Percentage<<"\t";
        //Display Average
        cout<<"Average: "<<Average<<"\t";
        //When marks are greater than or equal to 95
        if(sum>=95)
            cout<<"Grade: A";
        //When marks are greater than or equal to 90
        else if(sum>=90)
            cout<<"Grade: B";
        //When marks are greater than or equal to 85
        else if(sum>=85)
            cout<<"Grade: C";
        //When marks are greater than or equal to 80
        else if(sum>=80)
            cout<<"Grade: D";
        //When marks are greater than or equal to 65
        else if(sum>=65)
            cout<<"Grade: E";
        //When marks are less than 65
        else
            cout<<"Grade: F";
    }

    return 0;
}
