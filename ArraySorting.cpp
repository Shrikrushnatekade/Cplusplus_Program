#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a[100],rev[100],n,i,j,k,temp;
    cout<<"Enter the size of Array : ";
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<" Index of Array : ";
        cin>>a[i];
    }
    cout<<"Total Element are : ";
    for(j = 0; j < n;j++)
        cout<<a[j]<<" ";

    cout<<"\nSorted Elements are Assending Order : ";
    for(i = 0; i < n; i++)
    {
        for(k = i; k < n; k++)
        {
            if(a[i] >= a[k])
            {
                temp = a[k];
                a[k] = a[i];
                a[i] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<"\nSorted Elements in Descending Order : ";
    for(k=n-1;k>=0;k--)
	{
		rev[k]=a[k];
        cout<<rev[k]<<" ";  
    }
    return 0;
}