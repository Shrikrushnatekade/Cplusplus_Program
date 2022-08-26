#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter the Any Char Type \n";
    cin>>ch;

    if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<"Type is Alphabet";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout<<"Type is Numeric";
    }
    else
    {
        cout<<"Special Character Type";
    }
    return 0;
}