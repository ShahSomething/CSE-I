#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next_node;
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head=NULL;
    }
    void InsertAtStart(int data)
    {
        Node *temp,*p;
        temp= new Node;
        temp->data=data;
        if(head==NULL)
        {
            head=temp;
            head->next_node=NULL;

        }
        else
        {
            p=head;
            head=temp;
            head->next_node=p;
        }
        cout<<"Element inserted at the start.\n";
    }

    void InsertAtEnd(int data)
    {
        Node *temp,*p;
        temp= new Node;
        temp->data=data;
        p=head;
        while(p->next_node!=NULL)
        {
            p=p->next_node;
        }
        temp->next_node=NULL;
        p->next_node=temp;
        cout<<"Element inserted at the last.\n";
    }

    void Insert(int data, int pos)
    {
        int lastpos=0;
        Node *temp,*p,*s;
        temp= new Node;
        temp->data=data;
        p=head;
        while(p!=NULL)
        {
            p=p->next_node;
            lastpos++;
        }
        if(pos==1)
        {
            InsertAtStart(data);
        }
        else if(pos>1 && pos<=lastpos)
        {
            p=head;
            for(int i=1;i<pos;i++)
            {
                s=p;
                p=p->next_node;
            }
            s->next_node=temp;
            temp->next_node=p;
        }
        else
            cout<<"Position out of range.\n";
    }
    void DeleteFromStart()
    {
        if(head==NULL)
            cout<<"List is empty.\n";
        else
        {
            Node *s;
            s=head;
            head=head->next_node;
            delete s;
            cout<<"Element Deleted.\n";
        }
    }
    void DeleteFromEnd()
    {
        int counter=0;
        Node *s;
        s=head;
        while(s!=NULL)
        {
            s=s->next_node;
            counter++;
        }
        if(counter==1)
        {
            head=NULL;
        }
        else
        {
           s=head;
           while(s->next_node->next_node!=NULL)
           {
             s=s->next_node;
           }
           delete (s->next_node);
           s->next_node=NULL;
        }
        cout<<"Element Deleted.\n";
    }
    void DeleteAtPosition(int pos)
    {
        int counter=0;
        if(head==NULL)
        {
            cout<<"List is empty.\n";
            return;
        }
        if(pos==1)
        {
            DeleteFromStart();
            return;
        }
        Node *s,*p;
        s=head;
        while(s!=NULL)
        {
            s=s->next_node;
            counter++;
        }
        if(pos>1 && pos<=counter)
        {
            s=head;
            for(int i=1;i<pos;i++)
            {
                p=s;
                s=s->next_node;
            }
            p->next_node=s->next_node;
            delete s;
            cout<<"Element Deleted.\n";
        }
        else
            cout<<"Position out of Range.\n";
    }
    void Search(int data)
    {
        if(head==NULL)
        {
            cout<<"List is empty.\n";
            return;
        }
        int pos=0,counter=0;
        Node *s;
        s=head;
        while(s!=NULL)
        {
            pos++;
            if(s->data==data)
            {
                cout<<"Element "<<data<<" fount at position"<<pos<<endl;
                counter++;
            }
            s=s->next_node;
        }
        if(counter==0)
            cout<<"Element not found.\n";
    }
    void UpdateList(int data, int pos)
    {
        if(head==NULL)
        {
            cout<<"List is empty.\n";
            return;
        }
        Node *s;
        s=head;
        if(pos==1)
        {
            s->data=data;
        }
        else
        {
           for(int i=1;i<pos;i++)
           {
              if(s==NULL)
              {
                cout<<"There are less than "<<pos<<" elements\n";
                return;
              }
              s=s->next_node;
          }
          s->data=data;
        }
        cout<<"Node Updated"<<endl;
    }
    void EmptyList()
    {
        if(head==NULL)
        {
            cout<<"List is already Empty.\n";
            return;
        }
        Node *current,*ptr;
        current=head;
        while(current->next_node!=NULL)
        {
            ptr=current;
            current=current->next_node;
            free(ptr);

        }
        free(current);
        head==NULL;
        cout<<"List deleted.\n";
    }
    void DisplaySize()
    {
        if(head==NULL)
        {
            cout<<"List is empty.\n";
            return;
        }
        int counter=0;
        Node *s;
        s=head;
        while(s!=NULL)
        {
            counter++;
            s=s->next_node;
        }
        cout<<"Size of List = "<<counter<<endl;
    }
    void Print()
    {
        if(head==NULL)
        {
            cout<<"List is empty.\n";
            return;
        }
        Node *s;
        s=head;
        cout<<"Elements of the list are: ";
        while(s!=NULL)
        {
            cout<<s->data<<"-->";
            s=s->next_node;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    int choice;
    LinkedList L1;
do
    {   cout<<endl<<"---------------------------------"<<endl;
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node at position"<<endl;
        cout<<"4.Delete a Particular Node"<<endl;
        cout<<"5.Empty the List"<<endl;
        cout<<"6.Update Node Value"<<endl;
        cout<<"7.Search Element"<<endl;
        cout<<"8.Display Linked List"<<endl;
        cout<<"9.Display List Size"<<endl;
        cout<<"10.Delete from Beginning"<<endl;
        cout<<"11.Delete from Last"<<endl;
        cout<<"0.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning: "<<endl;
            int value;
            cout<<"Enter the value to be inserted: ";
            cin>>value;
            L1.InsertAtStart(value);
            cout<<endl;
            break;
        case 2:
            cout<<"Inserting Node at Last: "<<endl;
            cout<<"Enter the value to be inserted: ";
            cin>>value;
            L1.InsertAtEnd(value);
            cout<<endl;
            break;
        case 3:
            cout<<"Inserting Node at a given position:"<<endl;
            int pos;
            cout<<"Enter the value to be inserted: ";
            cin>>value;
            cout<<"Enter the position at which node is to be inserted: ";
            cin>>pos;
            L1.Insert(value,pos);
            cout<<endl;
            break;
        case 4:
            cout<<"Delete a particular node: "<<endl;
            cout<<"Enter the position at which node is to be Deleted: ";
            cin>>pos;
            L1.DeleteAtPosition(pos);
            break;
        case 5:
           cout<<"Emptying List"<<endl;
             L1.EmptyList();
           break;
        case 6:
            cout<<"Update Node Value:"<<endl;
            cout<<"Enter the value to be Updated: ";
            cin>>value;
            cout<<"Enter the position at which node is to be Updated: ";
            cin>>pos;
            L1.UpdateList(value,pos);
            cout<<endl;
            break;
        case 7:
            cout<<"Search element in Link List: "<<endl;
            cout<<"Enter the value to be Searched: ";
            cin>>value;
            L1.Search(value);
            cout<<endl;
            break;
        case 8:
            cout<<"Display elements of link list"<<endl;
            L1.Print();
            cout<<endl;
            break;
        case 9:
            cout<<"Size of list: "<<endl;
            L1.DisplaySize();
            cout<<endl;
            break;
        case 10:
            cout<<"Deleting Element from beginning.\n";
            L1.DeleteFromStart();
            break;
        case 11:
            cout<<"Deleting Element from Last.\n";
            L1.DeleteFromEnd();
            break;
       }
    }while (choice !=0);
    return 0;
}
