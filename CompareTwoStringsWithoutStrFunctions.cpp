#include <iostream>
using namespace std;

int main()
{
    char a[50], b[50];
    int k = 0, l = 0, c = 0;
    system("cls");
    cout << "Two String Name Compare \n\n";
    cout << "Enter the First String \n";
    gets(a);
    cout << "Enter the Second String \n";
    gets(b);

    for (int i = 0; a[i] = '\0'; i++)
    {
        if (a[i] == b[i])
            c++;
    }

    for(int i = 0; a[i] = '\0'; i++)
        k++;
    for(int i = 0; b[i] = '\0'; i++)
        l++;
    
    if((k == c) && (k == l) && (l == c))
    {
        cout<<"Two String Are Same";
    }
    else
    {
        cout<<"Two String Are Not Same";
    }
    return 0;
}