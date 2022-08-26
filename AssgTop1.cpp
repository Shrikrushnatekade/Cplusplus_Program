#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter a Value : ";
    cin >> a;

    cout << "Enter b Value : ";
    cin >> b;

    a += b;
    cout << "Two Number Of Addition : " << a;
    a -= b;
    cout << "Two Number of Subtraction : " << a;
    a *= b;
    cout << "Two Number of Multiplication : " << a;
    a /= b;
    cout << "Two Number of Division : " << a;
    a %= b;
    cout << "Two Number of Remainder : " << a;
    return 0;
}