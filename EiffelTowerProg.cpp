/*
Input :
   Enter the flour of Tower : 5
Output :
            1
            1
            1
            1
            1
           222
           222
           222
           222
          33333
          33333
          33333
         4444444
         4444444
        555555555
*/
#include <iostream>
using namespace std;

int main()
{
    int no, i, j, m, k;

    cout << "Enter the flour of Tower \n";
    cin >> no;

    for (i = 1; i <= no; i++)
    {
        for (m = no; m >= i; m--)
        {
            for (j = no; j > i; j--)
                cout << " ";
            for (k = 1; k <= 2 * i - 1; k++)
                cout << i;
            
             cout << "\n";
        }
    }

    return 0;
}