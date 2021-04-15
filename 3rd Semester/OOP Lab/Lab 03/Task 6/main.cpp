#include <iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class FlightBooking
{
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool cancelReservations(int number_ob_seats);
private:
    int id;
    int capacity;
    int reserved;
};

void FlightBooking::printStatus()
{
    cout<<"Flight "<<id<<" : "<<reserved<<"/"<<capacity<<" ( "<<(float(reserved)/float(capacity))*100<<"% ) seats taken"<<endl;
}

bool FlightBooking::reserveSeats(int number_ob_seats)
{
    if ((float(reserved+number_ob_seats)/float(capacity))*100<=105)
    {
        reserved+=number_ob_seats;
        return true;
    }
    return false;
}
bool FlightBooking::cancelReservations(int number_ob_seats)
{
    if(number_ob_seats<=reserved)
    {
        reserved-=number_ob_seats;
        return true;
    }
    return false;
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id=id;
    this->capacity=capacity;
    if (reserved>=0)
        {
            if((float(reserved)/float(capacity))*100<=105)
                this->reserved=reserved;
            else
                cout<<"Can't reserve more than 105%.\n";
        }
    else
        this->reserved=0;
}

int main()
{
    int reserved=0,capacity=0;
    cout<<"Provide Flight Capacity: ";
    cin>>capacity;
    cout<<"Provide Number of Reserved seats: ";
    cin>>reserved;
    FlightBooking booking(1,capacity,reserved);
    string command="";
    while(command!="quit")
    {
        booking.printStatus();
        cout<<"What would you like to do?: ";
        cin>>command;
        if(command[0]=='a')
        {
            string s= command.substr(3);
            int n=stoi(s);
            if(!booking.reserveSeats(n))
                cout<<"Can't perform this action.\n";
        }
        else
        {
            string s=command.substr(6);
            int n=stoi(s);
            if (!booking.cancelReservations(n))
                cout<<"Can't perform this action.\n";
        }

    }

    return 0;
}
