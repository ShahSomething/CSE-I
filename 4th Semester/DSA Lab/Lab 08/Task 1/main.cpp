#include <iostream>
using namespace std;

typedef struct
{
    int top=-1;
    int *Array;
}Stack;

int SIZE;

Stack Create(Stack S, int Size)
{
    SIZE=Size;
    S.Array = new int[SIZE];
    return S;
}

Stack Pop(Stack S)
{
    if(S.top<0)
    {
        cout<<"Stack is Empty.\n";
    }
    else
    {
        int R=S.Array[S.top];
        S.top-=1;
        cout<<"Element "<<R<<" is Popped from the Stack.\n";
    }
    return S;
}

Stack Push(int N,Stack S)
{
    if(S.top>=SIZE-1)
    {
        cout<<"Stack is Full.\n";
    }
    else
    {
        S.top+=1;
        S.Array[S.top]=N;
        cout<<"Element Inserted.\n";
    }
    return S;
}

void Top(Stack S)
{
    cout<<"Element on Top is: "<<S.Array[S.top]<<endl;
}

void Size(Stack S)
{
    cout<<"The size of the Stack is: "<<S.top+1<<endl;
}

Stack Empty(Stack S)
{
    delete[] S.Array;
    S.top=-1;
    cout<<"Stack has been Emptied.\n";
    return S;
}

void Display(Stack S)
{
    if(S.top>=0)
    {
        cout<<"Elements of the Stack are:\n";
        for(int i=S.top;i>=0;i--)
            cout<<S.Array[i]<<"   ";
        cout<<endl;
    }
    else
        cout<<"Stack is Empty.\n";
}

int main()
{
    int choice, item,S;
    Stack s;
    while (true)
    {
        cout<<"\n-------------"<<endl;
        cout<<"Operations on Stack"<<endl;
        cout<<"\n-------------"<<endl;
        cout<<"1.Create Stack"<<endl;
        cout<<"2.Push Element into the Stack"<<endl;
        cout<<"3.Pop Element from the Stack"<<endl;
        cout<<"4.Display the Stack"<<endl;
        cout<<"5.Empty the Stack"<<endl;
        cout<<"6.Size of Stack"<<endl;
        cout<<"7.Top item"<<endl;
        cout<<"8.Quit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the size of the stack: ";
            cin>>S;
            s = Create(s,S);
            break;
        case 2:
            cout<<"Enter value to be pushed into the stack: ";
            cin>>item;
            s = Push(item,s);
            break;
        case 3:
            s = Pop(s);
            break;
        case 4:
            Display(s);
            break;
        case 5:
            s=Empty(s);
            break;
        case 6:
            Size(s);
            break;
        case 7:
            Top(s);
            break;
        case 8:
            return 0;
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
