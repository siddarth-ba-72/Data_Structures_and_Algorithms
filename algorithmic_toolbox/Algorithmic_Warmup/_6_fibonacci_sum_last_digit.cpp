#include <bits/stdc++.h>
using namespace std;

int fib_sum_last_digit(long long int n)
{
    n = (n + 2) % 60;
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = (fib[i - 1] % 10 + fib[i - 2] % 10) % 10;
    }
    if (fib[n] == 0)
    {
        return 9;
    }
    return (fib[n] % 10) - 1;
}

int main()
{
    long long int n;
    cin >> n;
    cout << fib_sum_last_digit(n) << endl;
    return 0;
}
