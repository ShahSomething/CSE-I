#include <iostream>

using namespace std;
void input(int A[3][10]) //Definition of input function
{
    for(int r=0;r<3;r++) //Loop for rows
    {
        cout<<"Temperature of city "<<r+1<<endl;
        for(int c=0;c<10;c++) //Loop for columns
        {
            cin>>*(*(A+r)+c); //Array Entry
        }
    }
}
void AB(int A[3][10]) //Definition of AB function
{
  for(int r=0;r<3;r++) //Loop for rows
    {
        int below=0,above=0; //Variable Declaration
        for(int c=0;c<10;c++) //Loop for columns
        {
            if(*(*(A+r)+c)>30)
                above++; //Increment above
            else if(*(*(A+r)+c)<30)
                below++; //Increment below
        }
        cout<<"City "<<r+1<<" :  Temperature below 30: "<<below<<" Day(s).  ";
        cout<<"Temperature above 30:  "<<above<<" Day(s).\n";
    }
}
void Avgtemp(int A[3][10]) //Definition of Avgtemp Function
{
    int sum[3][1]={0}; //Array declaration
    for(int r=0;r<3;r++) //Loop for rows
    {
        for(int c=0;c<10;c++) //Loop for columns
        {
            *(*(sum+r)+0)+=*(*(A+r)+c);
        }
        cout<<"Average temperature of city "<<r+1<<" : "<<*(*(sum+r)+0)/10.0<<endl;
    }
    if(*(*(sum+0)+0)>*(*(sum+1)+0)&&*(*(sum+0)+0)>*(*(sum+2)+0))
        cout<<"City 1 is the Warmest";
    else if(*(*(sum+1)+0)>*(*(sum+0)+0)&&*(*(sum+1)+0)>*(*(sum+2)+0))
        cout<<"City 2 is the Warmest";
    else if(*(*(sum+2)+0)>*(*(sum+0)+0)&&*(*(sum+2)+0)>*(*(sum+1)+0))
        cout<<"City 3 is the Warmest";
    else if(*(*(sum+1)+0)==*(*(sum+0)+0)&&*(*(sum+1)+0)>*(*(sum+2)+0))
        cout<<"City 1 and city 2 are the Warmest";
    else if(*(*(sum+1)+0)==*(*(sum+2)+0)&&*(*(sum+1)+0)>*(*(sum+0)+0))
        cout<<"City 2 and city 3 are the Warmest";
    else if(*(*(sum+0)+0)==*(*(sum+2)+0)&&*(*(sum+0)+0)>*(*(sum+1)+0))
        cout<<"City 1 and city 3 are the Warmest";
    else
        cout<<"All cities have same temperature.";
}
int main()
{
    int A[3][10]; //Array declaration
    cout<<"Enter the Temperatures of the three cities: \n";
    input(A); //Function Call
    AB(A); //Function Call
    Avgtemp(A); //Function Call
    return 0;
}
