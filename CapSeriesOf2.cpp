#include <iostream>
using namespace std;

int main()
{
    int i, s = 0, n;

    cout<<"Enter the Number";
    cin>>n;
    i = 1;
    cout<<((bool)(i != n));
    for( i = 1; i <= n; i++)
    {
        if(i != n)
        {
            cout<<i<<"^2";
        }
        else
        {
            cout<<i<<"^2";
        }
    }
    return 0;
}