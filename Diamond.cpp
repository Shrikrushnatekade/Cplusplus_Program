//! Printing Star Pattern Diamond Print Input 9

/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 9, i, x, b, y;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            x = (n - i) / 2;
            y = i;

            while (x != 0)
            {
                cout << " ";
                x--;
            }
        }
        for (b = 0; b < y; b++)
        {
            cout << "*";
        }
        cout << "\n";
    }
        // Reverse Traingle

    for (i = 9; i >= 1; i--)
    {
        if (i % 2 == 0)
            continue;
        else
        {
            x = (n - i) / 2;
            y = i;
            while (x != 0)
            {
                cout << " ";
                x--;
            }
        }
        for( b = 0; b < y; b++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}