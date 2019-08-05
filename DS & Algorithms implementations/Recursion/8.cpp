#include <iostream>
using namespace std;

int fib1(int n)
{
    if (n <= 1)
        return n;
    else
        return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
        s = (t0 + t1),
        t0 = t1,
        t1 = s;

    return s;
}

int F[10];
int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = mfib(n - 1);

        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
        F[i] = -1;
    cout << mfib(8) << endl;
}