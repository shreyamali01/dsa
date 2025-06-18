#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            cnt += 1;
            if ((n / i) != i)
            {
                cnt += 1;
            }
        }
        if (cnt > 2)
        {
            return false;
        }
    }
    if (cnt == 2)
    {
        return true;
    }
    else
    {
        false;
    }
}

int main()
{
    int n = 20;
    cout << isPrime(n);
}
