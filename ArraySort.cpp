#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[100],d[100],temp,s = 0,k = 0,n,i,j;
    cout<<"Enter The size of Array : ";
    cin>>n;
    cout<<"\nEnter First Array Elements : \n";
    for(i = 0; i < n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter Second Array Elements : \n";
    for(i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for(i = 0, j = n; i < n;i++,j++)
    {
        c[i] = a[i];
        c[j] = b[i];
    }
    for(i = 0; i < 2 * n; i++)
    {
        for( j = i;j < 2 * n; j++)
        {
            if(c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for ( i = 0; i < 2 * n; i++)
    {
        s = 0;
        for (j = i; j < 2 * n; j++)
        {
            if (c[i] == c[j])       
            {
                s = s + 1;
            }
        }
        if (s == 1)
        {
            d[k] = c[i];
            k++;
        }
        
    }
    cout<<"The Size of Final Number Of Element is : "<<k<<"\n";
    for ( i = 0; i < k; i++)
    {
        cout<<d[i]<<"\t";
    }
    return 0;
}