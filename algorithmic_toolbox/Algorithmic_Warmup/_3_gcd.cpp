#include <bits/stdc++.h>
using namespace std;

int euclidean_gcd(int a, int b)
{
  if (b == 0)
    return a;
  return euclidean_gcd(b, a % b);
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << euclidean_gcd(a, b) << endl;
  return 0;
}
