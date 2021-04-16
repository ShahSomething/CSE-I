#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
       int info;
     node *next;
     node *prev;
}*start;
class list
{    public:
        void create_list(int value);
        void add_begin(int value);
        void add_at_a_position(int value, int position);
        void delete_element(int value);
        void search_element(int value);
        void display_dlist();
        void displaysize();
        list()
        {
            start = NULL;
        }
};

int main()
{
    int choice, element, position;
    list dl;
    do
    {   cout<<endl<<"----------------------------"<<endl;
        cout<<"1.Create Node"<<endl;
        cout<<"2.Add at beginning"<<endl;
        cout<<"3.Add at a given position"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Display size of List"<<endl;
        cout<<"0.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>element;
            dl.create_list(element);
            cout<<endl;
            break;
        case 2:
            cout<<"Enter the element: ";
            cin>>element;
            dl.add_begin(element);
            cout<<endl;
            break;
        case 3:
            cout<<"Enter the element: ";
            cin>>element;
            cout<<"Insert Element after postion: ";
            cin>>position;
            dl.add_at_a_position(element, position);
            cout<<endl;
            break;
        case 4:
            if (start == NULL)
            {
                cout<<"List empty,nothing to delete"<<endl;
                break;
            }
            cout<<"Enter the element for deletion: ";
            cin>>element;
            dl.delete_element(element);
            cout<<endl;
            break;
        case 5:
            dl.display_dlist();
            cout<<endl;
            break;
        case 6:
            dl.displaysize();
            break;
    }
    }
    while(choice != 0);
    return 0;
}
void list::create_list(int value)
{
    struct node *s, *temp;
    temp = new(struct node);
    temp->info = value;
    temp->next = NULL;
    if (start == NULL)
    {   temp->prev = NULL;
        start = temp;
    }
    else
    {   s = start;
        while (s->next != NULL)
            { s = s->next;   }
        s->next = temp;
        temp->prev = s;
    }   }
void list::add_begin(int value)
{   if (start == NULL)
    {   cout<<"List does not exist"<<endl;   }
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->info = value;
    temp->next = start;
    start->prev = temp;
    start = temp;
    cout<<"Element Inserted"<<endl;
}

void list::add_at_a_position(int value, int pos)
{   if (start == NULL)
    {   cout<<"List does not exist"<<endl;   }
    struct node *tmp, *q;
    int i;
    q = start;
    for (i = 0;i < pos - 1;i++)
    {
        q = q->next;
        if (q == NULL)
        {   cout<<"Position out of range"<<endl;
        }
    }
    tmp = new(struct node);
    tmp->info = value;
    if (q->next == NULL)
    {   q->next = tmp;
        tmp->next = NULL;
        tmp->prev = q;
    }
    else
    {   tmp->next = q->next;
        tmp->next->prev = tmp;
        q->next = tmp;
        tmp->prev = q;
    }
    cout<<"Element Inserted"<<endl;
}
void list::delete_element(int value)
{   struct node *tmp, *q;
    if (start->info == value)
    {   tmp = start;
        start = start->next;
        start->prev = NULL;
        cout<<"Element Deleted"<<endl;
        free(tmp);
        return;
    }
    q = start;
    while (q->next->next != NULL)
    {   if (q->next->info == value)
        {   tmp = q->next;
            q->next = tmp->next;
            tmp->next->prev = q;
            cout<<"Element Deleted"<<endl;
            free(tmp);
            return;
        }
        q = q->next;    }
    if (q->next->info == value)
    {   tmp = q->next;
        free(tmp);
        q->next = NULL;
        cout<<"Element Deleted"<<endl;
        return;
    }
    cout<<"Element "<<value<<" not found"<<endl;
}

void list::display_dlist()
{   struct node *q;
    if (start == NULL)
    {   cout<<"List empty,nothing to display"<<endl;
        return;
    }
    q = start;
    cout<<"The Doubly Link List is :"<<endl;
    while (q != NULL)
    {   cout<<q->info<<" <-> ";
        q = q->next;
    }
    cout<<"NULL"<<endl;
}
void list::displaysize()
{
    struct node *q = start;
    int cnt = 0;
    while (q != NULL)
    {   q = q->next;
        cnt++;
    }
    cout<<"Number of elements are: "<<cnt<<endl;
}
