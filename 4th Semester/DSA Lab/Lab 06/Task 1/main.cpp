#include <iostream>
using namespace std;
typedef struct {
int RegNo=0;
string Name="Default";
int Marks=0;
} Node;

Node* CreateList (int S,int *Last)
{   Node *Arr= new Node[S];
    *Last=0;
    return Arr;
}
Node* Add(int *Last,int index,int S,Node *Arr,Node nd)
{   if(*Last<0)
       cout<<"List does not exist";
    else if(*Last >= S)
       cout<<"List is Full";
    else if(index>*Last)
       cout<<"invalid Position";
    else
    {
        for(int i=*Last;i>=index;i--)
           Arr[i+1]=Arr[i];
        Arr[index]=nd;
        *Last=*Last+1;
    }
        return Arr;
}
Node* Remove(int *Last,int index,int S,Node *Arr)
{
    if(*Last<0)
       cout<<"List does not exist";
    else if(*Last == 0)
       cout<<"List is Already Empty";
    else
    {
        for(int i=index+1;i<=*Last;i++)
                Arr[i-1]=Arr[i];
        *Last=*Last-1;
    }
        return Arr;
}
void Size(int *Last)
{
    cout<<"Size of the List is: "<<*Last;
}
void Print(int *Last,Node *Arr)
{
    for(int i=0;i<*Last;i++)
    {
    cout<<"\nName: "<<Arr[i].Name;
    cout<<"\nRegNo: "<<Arr[i].RegNo<<"\nMarks: "<<Arr[i].Marks<<endl;
    }
}
void Get(int index,Node *Arr)
{
   cout<<"Element at index["<<index<<"] is: "<<endl;
   cout<<"\nName: ";
   cout<<Arr[index].Name<<"\nRegNo: "<<Arr[index].RegNo;
   cout<<"\nMarks: "<<Arr[index].Marks<<endl;
}
void IsEmpty(int *Last)
{
    if(*Last<=0)
       cout<<"List is Empty"<<endl;
    else
       cout<<"List is not Empty"<<endl;
}

int main()
{
Node *Ar;
Node nd;
int choice;
int S,index,Last=-1;
do{
cout<<"\n---------------------"<<endl;
cout<<"\n1) Create List \n2) Add Node \n3) Remove Node";
cout<<"\n4) Print\n5) Get Element\n6) Size of List";
cout<<"\n7) Is list Empty?\n\n0)Quit"<<endl;
cin>>choice;
cout<<"\n";
switch (choice){
    case 1:
        cout<<"Enter the size of the list: ";
        cin>>S;
        Ar=CreateList(S,&Last);
        break;
    case 2:
        cout<<"Enter the Name, RegNo and Marks: "<<endl;
        cin>>nd.Name>>nd.RegNo>>nd.Marks;
        cout<<"Enter the Index Number: ";
        cin>>index;
        Ar=Add(&Last,index,S,Ar,nd);
        break;
    case 3:
        cout<<"Enter the Index Number: ";
        cin>>index;
        Ar=Remove(&Last,index,S,Ar);
        break;
    case 4:
        Print(&Last,Ar);
        break;
    case 5:
        cout<<"Enter the Index Number: ";
        cin>>index;
        Get(index,Ar);
        break;
    case 6:
        Size(&Last);
        break;
    case 7:
        IsEmpty(&Last);
        break;
}
}while (choice != 0);
return 0;
}

