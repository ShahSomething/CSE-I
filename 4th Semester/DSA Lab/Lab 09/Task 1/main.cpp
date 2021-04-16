#include<iostream>
using namespace std;
struct Queue
{
    int rear, front;
    int size;
    int *arr;
};
Queue Create(Queue q,int s)
{
     q.front = q.rear = -1;
       q.size = s;
       q.arr = new int[s];
       return q;
}
Queue enQueue(Queue q,int value)
{
    if ((q.front == 0 && q.rear == q.size-1)
        || (q.rear == (q.front-1)%(q.size-1)))
    {
        cout<<"\nQueue is Full"<<endl;
    }
    else if (q.front == -1)
    {
        q.front = q.rear = 0;
        q.arr[q.rear] = value;
    }
    else if (q.rear == q.size-1 && q.front != 0)
    {
        q.rear = 0;
        q.arr[q.rear] = value;
    }
    else
    {
        q.rear++;
        q.arr[q.rear] = value;
    }
    return q;
}
Queue deQueue(Queue q)
{   if (q.front == -1)
    {
        cout<<"\nQueue is Empty"<<endl;
    }
    else
        {
    cout<<"\n"<<q.arr[q.front]<<" Dequeued"<<endl;
    q.arr[q.front] = -1;

    if (q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
    }
    else if (q.front == q.size-1)
        q.front = 0;
    else
        q.front++;
    }
return q;
}
void displayQueue(Queue q)
{cout<<"\nElements in Circular Queue are: "<<endl;
    if (q.rear >= q.front)
    {
        for (int i = q.front; i <= q.rear; i++)
            {   cout<<q.arr[i]<<"\t";   }
    }
    else
    {   for (int i = q.front; i < q.size; i++)
            {   cout<<q.arr[i]<<"\t";  }
        for (int i = 0; i <= q.rear; i++)
            {   cout<<q.arr[i]<<"\t";   }
            }
}
void isEmpty(Queue q)
{  if (q.front == -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
}
void front(Queue q)
{
  cout<<"Front of the queue is: "<<q.arr[q.front]<<endl;
}

void rear(Queue q)
{
  cout<<"Rear of the queue is: "<<q.arr[q.rear]<<endl;
}

int main()
{
    Queue q;
    int choice,item,S;
  while (1)
    {   cout<<"\n-------------"<<endl;
        cout<<"Operations on Circular Queue"<<endl;
        cout<<"\n-------------"<<endl;
        cout<<"1.Create Queue"<<endl;
        cout<<"2.Enqueue"<<endl;
        cout<<"3.Dequeue"<<endl;
        cout<<"4.Is the Queue Empty"<<endl;
        cout<<"5.Front"<<endl;
        cout<<"6.Rear"<<endl;
        cout<<"7.Quit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the size of the queue: ";
            cin>>S;
            q= Create(q,S);
            break;
        case 2:
            cout<<"Enter the values to be Enqueued: ";
            cin>>item;
            q=enQueue(q,item);
            displayQueue(q);
            break;
        case 3:
            q=deQueue(q);
            break;
        case 4:
            isEmpty(q);
            break;
        case 5:
          front(q);
            break;
        case 6:
            rear(q);
            break;
        case 7:
            return 0;
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
