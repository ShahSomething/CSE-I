#include <iostream>

using namespace std;

class Heater{
private:
    int temperature;
public:
    Heater(){temperature=15;}
    Heater(const Heater &obj)
    {
        cout<<"Inside Custom Copy Constructor.\n";
        temperature=obj.temperature+7;
    }
    void Warmer(){temperature+=5;}
    void Cooler(){temperature-=5;}
    int show(){
    return temperature;
    }
};

int main()
{
    Heater h1,h2(h1);
    cout<<"\t For heater 1\n";
    cout<<"Temperature: ";
    cout<<h1.show()<<endl;
    h1.Warmer();
    cout<<"Warmer Temperature: ";
    cout<<h1.show()<<endl;
    h1.Cooler();
    cout<<"Cooler Temperature: ";
    cout<<h1.show()<<endl;

    cout<<"\t For heater 2\n";

    cout<<"Temperature: ";
    cout<<h2.show()<<endl;
    h2.Warmer();
    h2.Warmer();
    cout<<"Warmer Temperature: ";
    cout<<h2.show()<<endl;
    h2.Cooler();
    cout<<"Cooler Temperature: ";
    cout<<h2.show()<<endl;
    return 0;
}
