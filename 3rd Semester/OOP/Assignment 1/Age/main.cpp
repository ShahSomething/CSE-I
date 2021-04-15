#include <iostream>

using namespace std;

class Age
{
private:
    int current_year;
    int birth_year;
public:
    void input()
    {
        cout<<"Enter Current Year: ";
        cin>>current_year;
        cout<<"Enter your year of birth: ";
        cin>>birth_year;
    }
    void show()
    {
        cout<<"Your Age is: "<<current_year-birth_year<<endl;
    }
};

int main()
{
    Age age;
    age.input();
    age.show();
    return 0;
}
