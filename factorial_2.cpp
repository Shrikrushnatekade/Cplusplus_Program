/*
Input :
    Enter the Number : 6
Output :
    Factorial Number is : 72
*/
#include<iostream>
using namespace std;

int fact(int);

int main()
{
    int iNo1,res;

    cout<<"Enter the Number : ";
    cin>>iNo1;

    res = fact(iNo1);

    cout<<"Factorial Number is : "<<res;
    return 0;
}
int fact(int no)
{
    int res = 1;
    if(no == 0 || no == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= no; i++)
        {
            res = res * i;
        }
        return res;
    }
}