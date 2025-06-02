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
    int low = 1;
    int high = x;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long prod = (long long)mid * mid;
        if ((prod <= x))
        {
            ans = max(mid, ans);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    cout << "ans is " << mySqrt(28);
}