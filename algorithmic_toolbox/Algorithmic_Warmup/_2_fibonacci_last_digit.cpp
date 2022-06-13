#include <bits/stdc++.h>
using namespace std;

long long int fibonacci_last_digit(long long int n)
{
    if (n <= 1)
        return n;
    long long int a = 0, b = 1;
    long long int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        long long int c = a + b;
        c %= 10;
        b = c;
        a = b;
    }
    return c;
}

int main()
{
    long long int n;
    cin >> n;
    cout << fibonacci_last_digit(n) << endl;
    return 0;
}
