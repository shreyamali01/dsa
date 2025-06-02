#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long power(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = ans * mid;
        if (ans > m)
        {
            return ans;
        }
    }
    return ans;
}

int nthRoot(int n, int m)
{
    if (m == 0)
    {
        return 0;
    }
    else if (m == 1)
    {
        return 1;
    }
    else
    {
        int ans = -1;
        int low = 1;
        int high = m;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            long long val = power(mid, n, m);
            if (val == m)
            {
                return mid;
            }
            else if (val < m)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
}

int main()
{
    cout << "ans is " << nthRoot(3, 9);
}
