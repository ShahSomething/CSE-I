#include <iostream>

using namespace std;

template<typename T>
void Swap(T &a, T &b)
{
    T temp= a;
    a=b;
    b=temp;
}
int main()
{
    int a=4,b=10;
    float c=6.3,d=2.9;
    char e='S', f='H';
    cout<<"Before swapping ints: \n";
    cout<<"A: "<<a<<"\nB: "<<b<<endl;
    Swap<int>(a,b);
    cout<<"After swapping ints: \n";
    cout<<"A: "<<a<<"\nB: "<<b<<endl;
    cout<<"Before swapping floats: \n";
    cout<<"C: "<<c<<"\nD: "<<d<<endl;
    Swap<float>(c,d);
    cout<<"After swapping floats: \n";
    cout<<"C: "<<c<<"\nD: "<<d<<endl;
    cout<<"Before swapping chars: \n";
    cout<<"E: "<<e<<"\nF: "<<f<<endl;
    Swap<char>(e,f);
    cout<<"After swapping chars: \n";
    cout<<"E: "<<e<<"\nF: "<<f<<endl;
    return 0;
}
