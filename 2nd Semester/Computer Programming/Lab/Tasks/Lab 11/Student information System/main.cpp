#include <iostream>
#include <stdio.h>
using namespace std;

struct student
{
    int reg;
    char name[30];
    int semester;
}Student_t[120];

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
void display(int reg)
{
    for (int i=0;i<120;i++)
    {
       if(Student_t[i].reg==reg)
        {
            cout<<"Name: "<<Student_t[i].name<<endl;
            cout<<"Semester: "<<Student_t[i].semester;
        }
    }

}
int main()
{

    for(int i=0;i<3;i++)
    {
        input(&Student_t[i]);
    }
    int reg;
    cout<<"Enter the registration Number: ";
    cin>>reg;
    display(reg);

    return 0;
}
