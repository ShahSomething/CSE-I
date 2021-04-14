#include <iostream>

using namespace std;

int main()
{
    char ch;//Variable declaration
    cout << "Enter an Alphabet: ";//Display message
    cin>>ch;//Input ch
    //Check whether ch is vowel or not
    if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        cout<<"The Alphabet you entered is a Vowel";//Display message
    else
        cout<<"The Alphabet you entered is a Consonant";//Display message
    return 0;
}
