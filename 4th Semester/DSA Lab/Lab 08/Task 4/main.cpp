#include <iostream>

using namespace std;

typedef struct Node
{
    int data;
    Node *next=NULL;
}Node;

class Queue
{
private:
    Node *Front;
    Node *Rear;
    int Capacity;
    int SIZE=0;
public:
    void Create(int C)
    {
        Front=Rear=NULL;
        Capacity=C;
        cout<<"Queue Created.\n";
    }
    void Enqueue(int x)
    {
        if(SIZE>=Capacity)
            cout<<"Queue is Full.\n";
        else
        {
           Node *temp;
           temp= new Node;
           temp->data=x;
           if(Rear==NULL)
           {
               Front=Rear=temp;
           }
           else
           {
               Rear->next=temp;
               Rear=temp;
           }
           cout<<"Element Enqueued.\n";
           SIZE++;
        }
    }
    void Dequeue()
    {
        if(Front==NULL)
            cout<<"Queue is Empty.\n";
        else
        {
            Node *temp=Front;
            Front=Front->next;
            if(Front==NULL)
            {
                Rear=NULL;
            }
            delete temp;
            SIZE--;
            cout<<"Element Dequeued.\n";
        }
    }
    void FRONT()
    {
        if(Front==NULL)
            cout<<"Queue is Empty.\n";
        else
            cout<<"Front: "<<Front->data<<endl;
    }
    void REAR()
    {
        if(Rear==NULL)
            cout<<"Queue is Empty.\n";
        else
            cout<<"Rear: "<<Rear->data<<endl;
    }
    void Size()
    {
        if(Front==NULL)
            cout<<"Queue is Empty.\n";
        else
            cout<<"Size of the Queue: "<<SIZE<<endl;
    }
    void Empty()
    {
        if(Front==NULL)
            cout<<"Queue is Empty.\n";
        else
        {
            Node *temp=Front;
            Node *N;
            while(temp!=NULL)
            {
                N=temp;
                temp=temp->next;
                delete N;
            }
            Front=Rear=NULL;
            cout<<"Queue Emptied.\n";
            SIZE=0;
        }
    }
    void Display()
    {
        if(Front==NULL)
            cout<<"Queue is Empty.\n";
        else
        {
            Node *temp=Front;
            int Array[SIZE];
            int i=0;
            while(temp!=NULL)
            {
                Array[i]=temp->data;
                i++;
                temp=temp->next;
            }
            for(int j=SIZE-1;j>0;j--)
                cout<<Array[j]<<"-->";
            cout<<Array[0]<<endl;
        }
    }

};

int main()
{
    int choice, item,S;
    Queue q;

  while (1)
    {
        cout<<"\n-------------"<<endl;
        cout<<"Operations on Queue"<<endl;
        cout<<"\n-------------"<<endl;
        cout<<"1.Create Queue"<<endl;
        cout<<"2.Enqueue"<<endl;
        cout<<"3.Dequeue"<<endl;
        cout<<"4.Empty the Queue"<<endl;
        cout<<"5.Size of Queue"<<endl;
        cout<<"6.Front"<<endl;
        cout<<"7.Rear"<<endl;
        cout<<"8.Display the Queue"<<endl;
        cout<<"9.Quit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter the size of the queue: ";
            cin>>S;
            q.Create(S);
            break;
        case 2:
            cout<<"Enter the value to be Enqueued: ";
            cin>>item;
            q.Enqueue(item);
            break;
        case 3:
            q.Dequeue();
            break;
        case 4:
            q.Empty();
            break;
        case 5:
            q.Size();
            break;
        case 6:
            q.FRONT();
            break;
        case 7:
            q.REAR();
            break;
        case 8:
            q.Display();
            break;
        case 9:
            return 0;
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
