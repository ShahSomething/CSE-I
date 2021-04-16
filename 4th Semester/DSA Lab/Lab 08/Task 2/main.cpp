#include <iostream>

using namespace std;

typedef struct Node
{
    int data;
    Node *next;
}Node;

class Stack
{
private:
    Node *top;
    int MAX_SIZE;
    int Size=0;
public:
    void Create(int Size)
    {
        MAX_SIZE=Size;
        top=NULL;
        cout<<"Stack Created.\n";
    }
    void Push(int data)
    {
        if(Size>=MAX_SIZE)
        {
            cout<<"Stack is Full.\n";
        }
        else
        {
           Node *temp;
           temp= new Node();
           temp->data=data;
           temp->next=top;
           top=temp;
           Size++;
           cout<<"Element Pushed into the Stack.\n";
        }
    }
    void Pop()
    {
        if(Size==0)
            cout<<"Stack is Empty.\n";
        else
        {
            Node *temp;
            temp=top;
            top=top->next;
            temp->next=NULL;
            delete temp;
            Size--;
            cout<<"Element Popped from the stack.\n";
        }
    }
    void Top()
    {
        if(Size==0)
            cout<<"Stack is Empty.\n";
        else
            cout<<"Top Element is: "<<top->data<<endl;
    }
    void size()
    {
        cout<<"Size of the Stack is: "<<Size<<endl;
    }
    void Empty()
    {
        Node *temp;
        temp=top;
        delete temp;
        top=NULL;
        Size=0;
        cout<<"Stack Emptied.\n";
    }
    void Display()
    {
        if(Size==0)
            cout<<"Stack is Empty.\n";
        else
        {
            Node *temp;
            temp=top;
            while(temp!=NULL)
            {
                cout<<temp->data<<"   ";
                temp=temp->next;
            }
        }
    }


};

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
            s.Create(S);
            break;
        case 2:
            cout<<"Enter value to be pushed into the stack: ";
            cin>>item;
            s.Push(item);
            break;
        case 3:
            s.Pop();
            break;
        case 4:
            s.Display();
            break;
        case 5:
            s.Empty();
            break;
        case 6:
            s.size();
            break;
        case 7:
            s.Top();
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
