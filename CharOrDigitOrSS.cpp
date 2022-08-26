#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Any One Key Type \n";
    cin>>ch;

    if(isalpha(ch))
        cout<<"Type is Alphabet";
    else if(isdigit(ch))
        cout<<"Type is Numeric";
    else
        cout<<"Special Character";
    getch();
    return 0;
}