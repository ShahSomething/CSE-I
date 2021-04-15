#include <iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class FlightBooking
{
public:
    FlightBooking(int id, int capacity, int reserved);
    FlightBooking();
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool cancelReservations(int number_ob_seats);
    bool set_id(int num);
    void set_capacity(int num);
    int get_id(){return id;}
private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking()
{
    id=0;capacity=0;reserved=0;
}

bool FlightBooking::set_id(int num)
{
    id=num;
    return true;
}
void FlightBooking::set_capacity(int num)
{
    capacity=num;
}
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
    FlightBooking booking[10];
    int id,cap,re;
    booking[0]= FlightBooking(1,400,0);
    string command="";
    while(command!="quit")
    {
        for(int i=0;i<10;i++)
        {
            if(booking[i].get_id()!=0)
                booking[i].printStatus();
        }
        cout<<"\nWhat would you like to do?: ";
        cin>>command;
        if(command=="create")
        {
            cin>>id>>cap;
            for (int i=0;i<10;i++)
            {
                if(booking[i].get_id()==0)
                {
                    booking[i].set_id(id);
                    booking[i].set_capacity(cap);
                    break;
                }
            }
        }
        else if(command=="delete")
        {
            cin>>id;
            for(int i=0;i<10;i++)
            {
                if(booking[i].get_id()==id)
                {
                    booking[i].set_id(0);
                    break;
                }
            }
        }
        else if(command=="add")
        {
            cin>>id>>re;
            for(int i=0;i<10;i++)
            {
                if(booking[i].get_id()==id)
                {
                    if(!booking[i].reserveSeats(re))
                        cout<<"Can't perform this action.\n";
                    break;
                }
            }
        }
        else if(command=="cancel")
        {
            cin>>id>>re;
            for(int i=0;i<10;i++)
            {
                if(booking[i].get_id()==id)
                {
                    if(!booking[i].cancelReservations(re))
                        cout<<"Can't perform this action.\n";
                    break;
                }
            }
        }
        else if(command!="quit")
            cout<<"Please enter a valid command.\n";

    }

    return 0;
}
