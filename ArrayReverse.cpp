#include<iostream>
using namespace std;

int main()
{
    int n[100],rev[100],div = 1,a,i,j,k;

    cout<<"Enter Array Number Element\n";
    cin>>a;

    cout<<"Enter Array Element\n";
    for (i = 0; i < a; i++)
    {
        cin>>n[i];
    }
    cout<<"Printing Reversed Element \n";
    for(k = a - 1; k >= 0; k--)
    {
        rev[k] = n[k];
        cout<<rev[k]<<" ";
        div*=rev[k];
    }
    cout<<"\nDivision All Element is : "<<div;
    return 0;
}