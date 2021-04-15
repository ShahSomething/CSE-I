#include <iostream>

using namespace std;

class Point{
private:
    int x,y;
public:
    Point(){x=0,y=0;}
    Point(int a, int b){x=a;y=b;}
    void Setx(int a){x=a;}
    void Sety(int a){y=a;}
    int Getx(){return x;}
    int Gety(){return y;}
    void show(){
    cout<<"( "<<x<<" , "<<y<<")";
    }

};

int main()
{
    Point P1,P2(2,4);
    P1.Setx(3);
    P1.Sety(8);
    cout<<"Point 1: ";
    cout<<P1.Getx()<<"  ";
    cout<<P1.Gety()<<endl;
    cout<<"Point 2: ";
    P2.show();
    return 0;
}
