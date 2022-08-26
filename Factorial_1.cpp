/*
Input : 
    Enter the Number : 5
Output :
    Factorial 5 is : 120
*/
#include<iostream>
using namespace std;

void fact(int);

int main()
{
    int iNo1;
    
    cout<<"Enter the Number : ";
    cin>>iNo1;

    fact(iNo1);
    return 0;
}
void fact(int no)
{
    int f = 1;
    for (int i = 1; i <= no; i++)
    {
        f *= i;
    }
    cout<<"Factorial "<<no<<" is : "<<f;
}