#include<iostream>
using namespace std;
int main()
{
    extern int a;
    cout<<a;
    return 0;
}
int a = 10;