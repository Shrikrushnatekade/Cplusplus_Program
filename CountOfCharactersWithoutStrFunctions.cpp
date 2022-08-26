#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    char a[50];

    cout << "Enter the String : \n";
    gets(a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        c++;
    }
    cout << "Number Of Character is : " << c;

    return 0;
}