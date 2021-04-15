#include <iostream>
#include <string.h>
using namespace std;

struct student{
char name[50];
int age;
float cgpa;
student(){;}
student(char n[50],int a,float c){
    int i=0;
    for(;*(n+i);i++)
    {
        *(name+i)=*(n+i);
    }
    *(name+i)='\0';
    age=a;
    cgpa=c;
}
void show();
};

void student::show(){
cout<<"Name: ";
cout<<name;
cout<<"\nAge: "<<age<<endl;
cout<<"CGPA: "<<cgpa<<endl;
}




int main()
{
    student s1("Shah Raza",20,2.9),s2;
    strcpy(s2.name,"Ali Bhai");
    s2.age=21;
    s2.cgpa=3.5;
    s1.show();
    s2.show();
    return 0;
}
