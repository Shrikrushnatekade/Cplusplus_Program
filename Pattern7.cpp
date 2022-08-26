//!Print star Pattern using for Loop

/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#include<iostream>
using namespace std;

int main()
{
    int n = 5, i, j;

    for(i = 0; i < 5; i++)
    {
        for( j = i; j < 5; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}