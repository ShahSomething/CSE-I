#include <iostream>
#include<math.h>
using namespace std;
struct coordinates
{
    int x;
    int y;
}p1,p2;

void input(coordinates *A)
{
    cout<<"X coordinate: ";
    cin>>A->x;
    cout<<"Y coordinate: ";
    cin>>A->y;
}

void distance (coordinates P1,coordinates P2)
{
    float exp1=pow(P2.x-P1.x,2);
    float exp2=pow(P2.y-P1.y,2);
    float exp=pow(exp1+exp2,0.5);
    cout<<"Distance between P1 and P2 is: "<<exp;
}
int main()
{
    cout<<"Enter the coordinates of P1: \n";
    input(&p1);
    cout<<"Enter the coordinates of P2: \n";
    input(&p2);
    distance(p1,p2);
    return 0;
}
