#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
const int SIZE=5;
struct student
{
    int reg;
    char name[30];
    int semester;
}Student_t[SIZE];

int strlen(char *A) //strlen Function Definition
{
    int i=0;
    for(;A[i]!='\0';i++);
    return i;
}

void input(student *s)
{
    cout<<"Reg no: ";
    cin>>s->reg;
    cout<<"Name: ";
    cin>>s->name;
    cout<<"Semester: ";
    cin>>s->semester;
}
void display()
{
    int counter=0;
    for (int n=0;;n++)
    {

        for(int i=0;i<SIZE;i++)
       {
           if(Student_t[i].reg==n)
            {
                cout<<"Reg No.: "<<Student_t[i].reg<<endl;
                cout<<"Name: "<<Student_t[i].name<<endl;
                cout<<"Semester: "<<Student_t[i].semester<<endl;
                counter++;
                break;
            }
       }
       if(counter==SIZE)
        break;
    }

}
int main()
{

    for(int i=0;i<SIZE;i++)
    {
        cout<<"Input the Information of student "<<i+1<<endl;
        input(&Student_t[i]);
    }
    cout<<"Students Information in ascending order of registration number: \n";
    display();
    return 0;
}
