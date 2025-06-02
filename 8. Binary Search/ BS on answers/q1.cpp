#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int mySqrt(int x)
{
    if (x == 0)
    {
        return 0;
    }
    int ans = 1;
    for (long long i = 1; i <= x; i++)
    {
        if ((i * i) <= x)
        {
            ans = i;
        }
        else
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    cout << "ans is " << mySqrt(28);
}