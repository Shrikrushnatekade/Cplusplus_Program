#include <iostream>
using namespace std;

int main()
{
    int a[100], s, n, i, j, flag = 0;

    cout << "Enter the Size of Array : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter " << i << " Index of Array : ";
        cin >> a[i];
    }
    cout << "As of Selection the Addition is : ";
    cin >> s;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == s && a[i] != 0 && a[j] != 0 && a[i] != a[j])
            {
                printf("a[%d] : %d\na[%d] : %d", i, a[i], j, a[j]);
                cout << "\nSum Found Between Indeces " << i << " and " << j;
                flag = 2;
                break;
            }
            else
                flag = 1;
        }
        if (flag == 2)
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Sum not Found";
    }
    return 0;
}