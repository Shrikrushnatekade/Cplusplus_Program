/*
Input : 
    ----Only One Number Find Out----
    Enter the Size of Array : 5
    Enter 0 Index of Array : 1
    Enter 1 Index of Array : 2
    Enter 2 Index of Array : 3
    Enter 3 Index of Array : 5
    Enter 4 Index of Array : 6
Output : 
    Missing Element is : 4
*/
#include<iostream>
using namespace std;

int FindNumber(int*,int);

int main()
{
    int iASiz,a[50],iMN;
    cout<<"----Only One Number Find Out----\n";
    cout<<"Enter the Size of Array : ";
    cin>>iASiz;

    for(int i = 0; i < iASiz; i++)
    {
        cout<<"Enter "<<i<<" Index of Array : ";
        cin>>a[i];
    }
    iMN = FindNumber(a , iASiz);

    cout<<"Missing Element is : "<<iMN;
    return 0;
}
int FindNumber(int *a,int n)
{
    int sum=0,i,totalsum;
	//1
	// for(i=0;i<n;i++) 
	// 	sum+=a[i];	
	// totalsum=((n+1)*(n+2))/2; 
	//2
	totalsum=((n+1)*(n+2))/2;
	for(i=0;i<n;i++) 
		totalsum=totalsum-a[i];

    return totalsum;
}