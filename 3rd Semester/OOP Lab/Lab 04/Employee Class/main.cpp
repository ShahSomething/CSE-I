#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class employee
{
    char *name;
    char *department;
    double salary;
    double period;
public:
    employee()
    {
        name="  ";
        department="  ";
        salary=0;
        period=0;
    }
    employee(char n[],char d[],double s, double p)
    {
        name=n;
        department=d;
        salary=s;
        period=p;
    }
    employee (const employee &d)
    {
        int len=strlen(d.name);
        name= new char[len+1];
        int len2=strlen(d.department);
        department= new char[len2+1];
        strcpy(name,d.name);
        strcpy(department,d.department);
        salary=d.salary;
        period=d.period;
    }
    ~employee()
    {
        delete name;
        delete department;
    }
    void input()
    {
        char n[100],d[100];
        cout<<"Enter Name: ";
        cin>>n;
        int l1=strlen(n);
        name=new char[l1+1];
        strcpy(name,n);
        cout<<"Enter Department: ";
        cin>>d;
        int l2=strlen(d);
        department= new char[l2+1];
        strcpy(department,d);
        cout<<"Enter Salary: ";
        cin>>salary;
        cout<<"Enter Period: ";
        cin>>period;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Period: "<<period<<endl;
    }

};
int main()
{
    employee e1;
    cout<<"Input Employee 1 Data:\n";
    e1.input();
    cout<<"Employee 1:\n";
    e1.show();
    employee e2=e1;
    cout<<"Employee 2:\n";
    e2.show();
    employee e3(e1);
    cout<<"Employee 3:\n";
    e3.show();
    return 0;
}
