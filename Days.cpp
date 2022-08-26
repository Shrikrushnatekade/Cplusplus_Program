#include<iostream>
using namespace std;

int main()
{
    int opt, n;

    cout<<"Enter the Month Ending Day";
    cin>>n;

    if(n == 29 || n == 28)
        opt = 1;
    if(n == 30)
        opt = 2;
    if(n == 31)
        opt = 3;

    switch(opt)
    {
        case 1 : 
                cout<<"FEB";
                break;
        case 2 :
                cout<<"APR, JUN, SEP, NOV";
                break;
        case 3 : 
                cout<<"JAN, MAR,MAY,JUL,AUG,OCT,DEC";
                break;
        default : 
                cout<<"INVALID INPUT";
    }
    return 0;
}