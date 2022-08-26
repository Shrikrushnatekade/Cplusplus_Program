#include<iostream>
using namespace std;

int main()
{
    double n[100], div = 1;
    int a, i, j;

    cout<<"Enter Array Number Element\n";
    cin>>a;

    cout<<"Enter Array Element\n";
    for (i = 0; i < a; i++)
    {
        cin>>n[i];
    }
    cout<<"Printing Array Element\n";
    for (i = 0; i < a; i++)
    {
        if (n[i] >= 0)
        {
            cout<<n[i]<<" ";
            div = div * n[i];
        }        
    }
    cout<<"\nDivision is Product is : "<<div;
    return 0;
}