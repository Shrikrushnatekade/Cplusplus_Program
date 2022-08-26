/*
Input : 
    Enter the Start Number : 10
    Enter the End Number : 21
Output : 
    Print Odd Number :
    11
    13
    15
    17
    19
    21
*/
#include <iostream>
using namespace std;

int main()
{
    int i, iNo1, iNo2;

    cout << "Enter the Start Number : ";
    cin >> iNo1;

    cout << "Enter the End Number : ";
    cin >> iNo2;

    i = iNo1;

    cout << "Print Odd Number : \n";
    while (iNo1 <= i && i < iNo2)
    {
        if (i % 2 == 0)
            cout << (i + 1) << "\n";
        i++;
    }
    return 0;
}