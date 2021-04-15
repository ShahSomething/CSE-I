#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string Name;
    int age;
    string occupation;
    string name(){return Name;}
};

void print(Person* person)
{
    cout<<", "<<person->Name<<" is "<<person->age<<" years old and is a "<<person->occupation<<endl;
}

int main()
{
    Person person;
    person.Name="Harry";
    person.age=21;
    person.occupation="Doctor";
    cout<<"Meet "<<person.name();
    print(&person);
    return 0;
}
