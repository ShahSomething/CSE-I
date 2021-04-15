#include <iostream>
using namespace std;
class FarmAnimal
{
public:
    FarmAnimal();
    double getWaterConsumption();  // ...
protected:
    double water_consumption;
};
FarmAnimal::FarmAnimal()
{
    this->water_consumption = 0;
}
double FarmAnimal::getWaterConsumption()
{
    return water_consumption;
}

class Cow: public FarmAnimal
{
protected:
    int weight;
public:
    Cow(){ weight=0;}
    void input()
    {
        cin>>weight;
        water_consumption=(weight*8.6)/100;
    }
};

class Sheep: public FarmAnimal
{
protected:
    int weight;
public:
    void input()
    {
        cin>>weight;
        water_consumption=(weight*1.1)/10;
    }
};

class Horse: public FarmAnimal
{
protected:
    int weight;
public:
    void input()
    {
        cin>>weight;
        water_consumption=(weight*6.8)/100;
    }
};

class ConsumptionAccumulator
{
public:
    ConsumptionAccumulator();
    double getTotalConsumption();
    void addConsumption(double r);
private:
    double total_consumption;
};
ConsumptionAccumulator::ConsumptionAccumulator() :  total_consumption(0)
{

}
double ConsumptionAccumulator::getTotalConsumption()
{
    return total_consumption;
}
void ConsumptionAccumulator::addConsumption(double r)
{
    total_consumption += r;
}
int main()
{
    ConsumptionAccumulator accumulator;
  // read user input
    string s="s";
    while(s!="quit")
    {
        cin>>s;
        if(s=="cow")
        {
            Cow c;
            c.input();
            //FarmAnimal F(c.getWaterConsumption());
            accumulator.addConsumption(c.getWaterConsumption());
        }
        else if(s=="sheep")
        {
            Sheep S;
            S.input();
           // FarmAnimal F(S.getWaterConsumption());
            accumulator.addConsumption(S.getWaterConsumption());
        }
        else if(s=="Horse")
        {
            Horse h;
            h.input();
            //FarmAnimal F(h.getWaterConsumption());
            accumulator.addConsumption(h.getWaterConsumption());
        }
    }
  // create appropriate objects and add them to the accumulator
    cout << accumulator.getTotalConsumption();

    return 0;
}
