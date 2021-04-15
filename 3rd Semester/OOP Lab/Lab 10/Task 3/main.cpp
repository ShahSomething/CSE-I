#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length,width;
public:
    Rectangle():length(1),width(1){}
    float Perimeter(){return 2*(length+width);}
    float Area(){return length*width;}
    float GetL(){return length;}
    float GetW(){return width;}
    void SetL(float l)
    {
        if(l>=0.0 && l<=20.0)
            length=l;
        else
            throw"The length should be in the range 0-20.";
    }
    void SetW(float w)
    {
        if(w>=0.0 && w<=20.0)
            width=w;
        else
            throw"The width should be in the range 0-20.";
    }
};
int main()
{
    Rectangle r;
    try
    {
        r.SetL(12.4);
        r.SetW(20.8);
    }
    catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
    cout<<"Length: "<<r.GetL()<<endl;
    cout<<"Width: "<<r.GetW()<<endl;
    cout<<"Area: "<<r.Area()<<endl;
    cout<<"Perimeter: "<<r.Perimeter();
    return 0;
}
