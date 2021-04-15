#include <iostream>

using namespace std;

class FlightBooking
{
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
private:
    int id;
    int capacity;
    int reserved;
};

void FlightBooking::printStatus()
{
    cout<<"Flight "<<id<<" : "<<reserved<<"/"<<capacity<<" ( "<<(float(reserved)/float(capacity))*100<<"% ) seats taken"<<endl;
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id=id;
    this->capacity=capacity;
    this->reserved=reserved;
}

int main()
{
    int reserved=0,capacity=0;
    cout<<"Provide Flight Capacity: ";
    cin>>capacity;
    cout<<"Provide Number of Reserved seats: ";
    cin>>reserved;
    FlightBooking booking(1,capacity,reserved);
    booking.printStatus();
    return 0;
}
