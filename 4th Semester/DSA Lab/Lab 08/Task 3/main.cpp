#include <iostream>

using namespace std;

typedef struct
{
    int Front,Rear,Capacity;
    int *Array;
}Queue;

Queue Create(Queue Q,int S)
{
    Q.Front=Q.Rear=0;
    Q.Capacity=S;
    Q.Array=new int;
    return Q;
}

Queue Enqueue(int data, Queue Q)
{
    if(Q.Rear==Q.Capacity)
    {
        cout<<"Queue is Full.\n";
    }
    else
    {
        Q.Array[Q.Rear]=data;
        Q.Rear+=1;
        cout<<"Element Enqueued.\n";
    }
    return Q;
}

Queue Dequeue(Queue Q)
{
    if(Q.Front==Q.Rear)
        cout<<"Queue is Empty.\n";
    else
    {
        for(int i=0;i<Q.Rear-1;i++)
        {
            Q.Array[i]=Q.Array[i+1];
        }
        Q.Rear--;
        cout<<"Element Dequeued.\n";
    }
    return Q;
}
void Front(Queue Q)
{
    if(Q.Front==Q.Rear)
        cout<<"Queue is Empty.\n";
    else
        cout<<"Front: "<<Q.Array[Q.Front]<<endl;
}
void Rear(Queue Q)
{
    if(Q.Front==Q.Rear)
        cout<<"Queue is Empty.\n";
    else
        cout<<"Rear: "<<Q.Array[Q.Rear-1]<<endl;
}
void Size(Queue Q)
{
    if(Q.Front==Q.Rear)
        cout<<"Queue is Empty.\n";
    else
        cout<<"Size of the Queue: "<<Q.Rear<<endl;
}
Queue Empty(Queue Q)
{
    if(Q.Front==Q.Rear)
        cout<<"Queue is Empty.\n";
    else
    {
        Q.Front=Q.Rear=0;
        delete[] Q.Array;
        cout<<"Queue Emptied.\n";
    }
    return Q;
}

void Display(Queue Q)
{
    if(Q.Front==Q.Rear)
        cout<<"Queue is Empty.\n";
    else
    {
        for(int i=Q.Rear-1;i>0;i--)
            cout<<Q.Array[i]<<"-->";
        cout<<Q.Array[0]<<endl;
    }
}

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
            q = Create(q,S);
            break;
        case 2:
            cout<<"Enter the value to be Enqueued: ";
            cin>>item;
            q=Enqueue(item,q);
            break;
        case 3:
            q=Dequeue(q);
            break;
        case 4:
            q=Empty(q);
            break;
        case 5:
            Size(q);
            break;
        case 6:
            Front(q);
            break;
        case 7:
            Rear(q);
            break;
        case 8:
            Display(q);
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
