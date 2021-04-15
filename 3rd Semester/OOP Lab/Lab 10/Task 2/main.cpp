#include <iostream>

using namespace std;

template<class T>
class SmartArray
{
private:
    T *Array;
    int SIZE;
public:
    SmartArray()
    {
        SIZE=5;
        Array= new T[SIZE];
    }
    SmartArray(int Size)
    {
        SIZE=Size;
        Array=new T[SIZE];
    }
    T &Access(int index)
    {
        if(index<0 || index>=SIZE)
            throw "Index out of bound.\n";
        else
            return Array[index];
    }
    ~SmartArray()
    {
        delete Array;
    }
};

int main()
{
    SmartArray<int> Arr;
    SmartArray<char> CArr(6);
    try
    {
        for (int i=0;i<5;i++)
            Arr.Access(i)=i+1;
        for (int i=0;i<6;i++)
            cout<<Arr.Access(i)<<"  ";
    }
    catch(const char *msg)
    {
        cerr<<msg<<endl;
    }

    return 0;
}
