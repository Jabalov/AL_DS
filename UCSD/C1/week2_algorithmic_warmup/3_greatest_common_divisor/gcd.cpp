#include <iostream>
using namespace std;

int gcd_naive(int a, int b)
{
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++)
  {
    if (a % d == 0 && b % d == 0)
    {
      if (d > current_gcd)
      {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_fast(int a, int b)
{
  return a % b == 0 ? b : gcd_fast(b % a, a);
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << gcd_naive(a, b) << endl;
  return 0;
}