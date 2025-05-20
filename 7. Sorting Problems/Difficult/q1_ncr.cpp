#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    if ((r == 0) || (r == n))
    {
        return 1;
    }

    if (r > n)
    {
        return 0;
    }

    int a = max((n - r), r);
    int b = min((n - r), r);

    long long num = 1;
    long long den = 1;
    while (n > a)
    {
        num = num * n;
        n--;
        cout << "num " << num << " ";
    }
    cout << " ";

    while (b > 1)
    {
        den = den * b;
        b--;
    }

    int ans = num / den;
    return ans;
}

int main()
{
    int n = 25;
    int r = 10;
    cout << nCr(n, r);
}