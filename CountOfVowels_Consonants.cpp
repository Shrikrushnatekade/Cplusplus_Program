#include <iostream>
using namespace std;

int main()
{
    char s1[50];
    int c = 0, v = 0;

    cout<<"Enter the String : ";
    gets(s1);

    for (int i = 0; s1[i]!='\0'; i++)
    {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
            v++;
        else
            c++;
    }
    
    cout<<"Vowels Count : "<<v << "\n";
    cout<<"Consonants Count : "<<c;
    
    return 0;
}