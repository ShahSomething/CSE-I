#include <iostream>
#include<string>
using namespace std;

class GymSubcription
{
private:
    int ID;
    string name;
    int membership;
public:
    GymSubcription();
    GymSubcription(int id, string Name, int Membership);
    void set_id(int num);
    void set_name(string Name);
    int get_id(){return ID;}
    void ExtendMembership(int number_of_months);
    void cancelMembership();
    void printStatus();
};

GymSubcription::GymSubcription()
{
    ID=0;name="";membership=0;
}

GymSubcription::GymSubcription(int id, string Name, int Membership)
{
    ID=id;name=Name; membership=Membership;
}

void GymSubcription::set_id(int num)
{
    ID=num;
}

void GymSubcription::set_name(string Name)
{
    name=Name;
}

void GymSubcription::printStatus()
{
    cout<<"Member "<<ID<<" : "<<name<<", subscription valid for "<<membership<<" months."<<endl;
}

void GymSubcription::ExtendMembership(int number_of_months)
{
    membership+=number_of_months;
}

void GymSubcription::cancelMembership()
{
    membership=0;
}

int main()
{
    GymSubcription subcription[10];
    int id,mem;
    string Name;
    string command="";
    while(command!="quit")
    {
        for(int i=0;i<10;i++)
        {
            if(subcription[i].get_id()!=0)
                subcription[i].printStatus();
        }
        cout<<"\nWhat would you like to do?: ";
        cin>>command;
        if(command=="create")
        {
            cin>>id>>Name;
            for (int i=0;i<10;i++)
            {
                if(subcription[i].get_id()==0)
                {
                    subcription[i]= GymSubcription(id,Name,0);
                    break;
                }
            }
        }
        else if(command=="delete")
        {
            cin>>id;
            for(int i=0;i<10;i++)
            {
                if(subcription[i].get_id()==id)
                {
                    subcription[i].set_id(0);
                    break;
                }
            }
        }
        else if(command=="extend")
        {
            cin>>id>>mem;
            for(int i=0;i<10;i++)
            {
                if(subcription[i].get_id()==id)
                {
                    subcription[i].ExtendMembership(mem);
                    break;
                }
            }
        }
        else if(command=="cancel")
        {
            cin>>id;
            for(int i=0;i<10;i++)
            {
                if(subcription[i].get_id()==id)
                {
                    subcription[i].cancelMembership();
                    break;
                }
            }
        }
        else if(command!="quit")
            cout<<"Please enter a valid command.\n";

    }
    return 0;
}
