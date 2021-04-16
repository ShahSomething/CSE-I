#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int info;
    struct node *next;
}*last;
class list
{
    public:
        void create_node(int value);
        void add_begin(int value);
        void add_at_a_position(int value, int position);
        void delete_element(int value);
        void search_element(int value);
        void display_list();
        void update();
        list()
        {
            last = NULL;
        }
};

int main()
{   int choice, element, position;
    list cl;
    do
    {
        cout<<endl<<"---------------------------"<<endl;
        cout<<"1.Create Node"<<endl;
        cout<<"2.Add at beginning"<<endl;
        cout<<"3.Add at a given position"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Search"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Update"<<endl;
        cout<<"0.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>element;
            cl.create_node(element);
            cout<<endl;
            break;
        case 2:
            cout<<"Enter the element: ";
            cin>>element;
            cl.add_begin(element);
            cout<<endl;
            break;
        case 3:
            cout<<"Enter the element: ";
            cin>>element;
            cout<<"Insert element after position: ";
            cin>>position;
            cl.add_at_a_position(element, position);
            cout<<endl;
            break;
        case 4:
            cout<<"Enter the element for deletion: ";
            cin>>element;
            cl.delete_element(element);
            cout<<endl;
            break;
        case 5:
            cout<<"Enter the element to be searched: ";
            cin>>element;
            cl.search_element(element);
            cout<<endl;
            break;
        case 6:
            cl.display_list();
            break;
        case 7:
            cl.update();
            break;
        }
    }while(choice != 0);
    return 0;
}
void list::create_node(int value)
{   struct node *temp;
    temp = new(struct node);
    temp->info = value;
    if (last == NULL)
    {   last = temp;
        temp->next = last;
    }
    else
    {   temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void list::add_begin(int value)
{
    if (last == NULL)
    {   cout<<"List does not exit"<<endl;   }
    struct node *temp;
    temp = new(struct node);
    temp->info = value;
    temp->next = last->next;
    last->next = temp;
}
void list::add_at_a_position(int value, int pos)
{   if (last == NULL)
    {   cout<<"List does not exit"<<endl;   }
    struct node *temp, *s;
    s = last->next;
    for (int i = 0;i < pos-1;i++)
    {   s = s->next;
        if (s == last->next)
        {   cout<<"Position out of range";  }
    }
    temp = new(struct node);
    temp->next = s->next;
    temp->info = value;
    s->next = temp;
    if (s == last)
    {   last=temp;  }
}

void list::delete_element(int value)
{   struct node *temp, *s;
    s = last->next;
    if (last->next == last && last->info == value)
    {   temp = last;
        last = NULL;
        free(temp); }
    if (s->info == value)
    {   temp = s;
        last->next = s->next;
        free(temp); }
    while (s->next != last)
    {
        if (s->next->info == value)
        {   temp = s->next;
            s->next = temp->next;
            free(temp);
            cout<<"Element deleted"<<endl;  }
        s = s->next;
    }
    if (s->next->info == value)
    {   temp = s->next;
        s->next = last->next;
        free(temp);
        last = s;   }
    else
    { cout<<"Element not found"; }
}
void list::search_element(int value)
{
    struct node *s;
    int counter = 0;
    s = last->next;
    while (s != last)
    {
        counter++;
        if (s->info == value)
        {
            cout<<"Element "<<value;
            cout<<" found at position "<<counter<<endl;
            return;
        }
        s = s->next;
    }
    if (s->info == value)
    {
        counter++;
        cout<<"Element "<<value;
        cout<<" found at position "<<counter<<endl;
        return;
    }
    cout<<"Element "<<value<<" not found in the list"<<endl;
}
void list::display_list()
{
    struct node *s;
    if (last == NULL)
    {
        cout<<"List is empty, nothing to display"<<endl;
        return;
    }
    s = last->next;
    cout<<"Circular Link List: "<<endl;
    while (s != last)
    {   cout<<s->info<<"->";
        s = s->next;
    }
    cout<<s->info<<endl;
}
void list::update()
{
    int value, pos, i;
    if (last == NULL)
    {
        cout<<"List is empty, nothing to update"<<endl;
        return;
    }
    cout<<"Enter the node position to be updated: ";
    cin>>pos;
    cout<<"Enter the new value: ";
    cin>>value;
    struct node *s;
    s = last->next;
    for (i = 0;i < pos - 1;i++)
    {
        if (s == last)
        {
            cout<<"There are less than "<<pos<<" elements.";
            cout<<endl;
            return;
        }
        s = s->next;
    }
    s->info = value;
    cout<<"Node Updated"<<endl;
}

