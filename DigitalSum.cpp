#include <iostream>
using namespace std;

int DigitOfSum(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (n % 10 + DigitOfSum(n / 10));
}
int main()
{
    int n, d;

    cout << "Enter The Number : ";
    cin >> n;

    d = DigitOfSum(n);

    cout << "The Sum Of Digit is : " << d;

    return 0;
}