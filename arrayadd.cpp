#include<iostream>
using namespace std;

int main()
{
    int n[100],sum = 0,a = 0;

    cout<<"Enter The Number Element : ";
    cin>>a;

    cout<<"\nEnter Array Elements\n";
    for(int i = 0; i < a; i++)
    {
        cin>>n[i];
    }
    cout<<"Printing Array Elements.\n";
    for (int i = 0; i < a; i++)
    {
        cout<<n[i]<<" ";
    }
    for (int i = 0; i < a; i++)
    {
        sum = sum + n[i];
    }
    cout<<"\nAddition is Array is : "<<sum;
    
    
    return 0;
}