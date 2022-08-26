/*
Input :
    Enter the Size of Array : 8
    Enter the 0 Index of Value : 1
    Enter the 1 Index of Value : 10
    Enter the 2 Index of Value : 15
    Enter the 3 Index of Value : 25
    Enter the 4 Index of Value : 54
    Enter the 5 Index of Value : 55
    Enter the 6 Index of Value : 67
    Enter the 7 Index of Value : 78
Output :
    All Even Number Are : 10 54 78
    All Odd Number Are : 1 15 25 55 67
*/
#include <iostream>
using namespace std;

int main()
{
    int a[50], b[50], c[50], isNo, e = 0, o = 0;

    cout << "Enter the Size of Array : ";
    cin >> isNo;

    for (int i = 0; i < isNo; i++)
    {
        cout << "Enter the " << i << " Index of Value : ";
        cin >> a[i];
    }

    for (int i = 0; i < isNo; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[e] = a[i];
            e++;
        }
        else
        {
            c[o] = a[i];
            o++;
        }
    }

    cout << "All Even Number Are : ";
    for (int i = 0; i < e; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\nAll Odd Number Are  : ";
    for (int i = 0; i < o; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}