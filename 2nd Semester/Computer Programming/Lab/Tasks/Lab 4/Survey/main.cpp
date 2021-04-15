#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    int coffee=0,tea=0,coke=0,orange_juice=0;
    int choice,i=0;
    cout << "What is your favorite beverage: " << endl; //Display message
    cout<<"(1) Coffee       (2) Tea        (3) Coke     (4) Orange Juice\n\n"; //Display message
    do
    {
        i++; //Increment i
        cout<<"Please input the favorite beverage of person #"<<i<<": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program\n";
        cin>>choice; //Input choice
        switch(choice) //Transfer control based on value of choice
        {
        case 1: //choice is 1
            coffee++; //Increment coffee
            break;
        case 2: //choice is 2
            tea++; //Increment tea
            break;
        case 3: //choice is 3
            coke++; //Increment coke
            break;
        case 4: //choice is 4
            orange_juice++; //Increment orange_juice
            break;
        case -1: //choice is -1
            break;
        default: //choice is none of the above
            cout<<"Invalid Entry\n";
        }
    }while(choice!=-1);
    cout<<"The total number of people surveyed is "<<i-1; //Display no. of people
    cout<<".The results are as follows: \n"; //Display message
    cout<<"Beverage			 Number of Votes\n"; //Display message
    cout<<"*****************************************"; //Display message
    cout<<"\nCoffee                    "<<coffee;
    cout<<"\nTea                       "<<tea;
    cout<<"\nCoke                      "<<coke;
    cout<<"\nOrange Juice              "<<orange_juice;
    return 0;
}
