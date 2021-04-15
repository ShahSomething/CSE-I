#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class student
{
private:
    char *name;
    int age;
public:
    student(){name="",age=0;}
    student(char n[],int a){name=n,age=a;}
    student(const student &s)
    {
        //name=s.name;
        //age=s.age;
        int len=strlen(name);
        name= new char[len+1];
        strcpy(name,s.name);
        age=s.age;
    }
    void show(){
    cout<<"student data "<<"\tAddress:"<<(void *)name<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    student s1("Ali",20);
    s1.show();
    student s2=s1;
    s2.show();
    return 0;
}
