
//! Printing the Star Print in Square

/*

* * * * *
*       *
*       *
*       *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5, i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 1 || i == 2 || i == 3)
            {
                if ( j == 1 || j == 2 || j == 3)
                {
                    cout << "  ";
                    continue;
                }
                else
                {
                    cout << "* ";
                }
            }
            else
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}