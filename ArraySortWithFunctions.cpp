//! Input :
    // Enter the size of Array : 4
    // Enter 0 Index of Array : 4
    // Enter 1 Index of Array : 12
    // Enter 2 Index of Array : 10
    // Enter 3 Index of Array : 20

//! Output: 
    // 4 10 12 20

#include<iostream>
using namespace std;
int *sort(int *b, int n)
{
    int i, j, t;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(b[i] < b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    return b;
}
int main()
{
    int n,a[100],i,*p;
    cout<<"Enter the size of Array : ";
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<" Index of Array : ";
        cin>>a[i];
    }
    p = sort(a, n);
    for( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}