#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int mins,texts;
    cout<<"Enter the number of Minutes used this month: ";
    //Input value of mins
    cin>>mins;
    cout << "Enter the number of text messages used this month: ";
    //Input value of texts
    cin>>texts;
    cout<<"\n\n\t\t Cell Phone Monthly Bill:\n\n";
    //Display base charge
    cout<<"Base Charge: 15.00\n";
    //When mins and texts both are greater than 50
    if(mins>50 && texts>50)
    {
        //Formula for additional mins
        int additional_mins = mins-50;
        //Formula for additional mins charge
        float a_m_c = additional_mins*0.25;
        //Formula for additional texts
        int additional_texts = texts-50;
        //Formula for additional texts charge
        float a_t_c = additional_texts*0.15;
        //Display additional mins charge
        cout<<"Additional Minutes Charge: "<<a_m_c<<endl;
        //Display additional texts charge
        cout<<"Additional Text Message Charge: "<<a_t_c<<endl;
        //Display 911 Fee
        cout<<"911 Fee: 0.44\n";
        //Total without tax
        float total = 15.00+0.44+a_m_c+a_t_c;
        //Formula for Tax
        float tax = (total*5)/100;
        //Display tax
        cout<<"Tax: "<<tax<<endl;
        //Display Total including tax
        cout<<"Total Bill Amount: "<<total+tax<<endl;
    }
    //When only texts are greater than 50
    else if (texts>50)
    {
        //Formula for additional texts
        int additional_texts = texts-50;
        //Formula for additional texts charge
        float a_t_c = additional_texts*0.15;
        //Display additional texts charge
        cout<<"Additional Text Message Charge: "<<a_t_c<<endl;
        //Display 911 Fee
        cout<<"911 Fee: 0.44\n";
        //Total without tax
        float total = 15.00+0.44+a_t_c;
        //Formula for Tax
        float tax = (total*5)/100;
        //Display tax
        cout<<"Tax: "<<tax<<endl;
        //Display Total including tax
        cout<<"Total Bill Amount: "<<total+tax<<endl;
    }
    //When only mins are greater than 50
    else if(mins>50)
    {
        //Formula for additional mins
        int additional_mins = mins-50;
        //Formula for additional mins charge
        float a_m_c = additional_mins*0.25;
        //Display additional mins charge
        cout<<"Additional Minutes Charge: "<<a_m_c<<endl;
        //Display 911 Fee
        cout<<"911 Fee: 0.44\n";
        //Total without tax
        float total = 15.00+0.44+a_m_c;
        //Formula for tax
        float tax = (total*5)/100;
        //Display tax
        cout<<"Tax: "<<tax<<endl;
        //Display total bill including tax
        cout<<"Total Bill Amount: "<<total+tax<<endl;
    }
    //When mins and texts are less than 50
    else
    {
        //Display 911 Fee
        cout<<"911 Fee: 0.44\n";
        //Total without tax
        float total = 15.00+0.44;
        //Formula for tax
        float tax = (total*5)/100;
        //Display tax
        cout<<"Tax: "<<tax<<endl;
        //Display total including tax
        cout<<"Total Bill Amount: "<<total+tax<<endl;
    }
    return 0;
}
