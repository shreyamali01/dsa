#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int kthElement(vector<int> &a, vector<int> &b, int k)
{
    int m = a.size();
    int n = b.size();
    if (m > n)
    {
        return kthElement(b, a, k);
    }
    int low = max(0, k - n);
    int high = min(k, m);
    while (low <= high)
    {
        int mid1 = low + (high - low) / 2;
        int mid2 = k - mid1;
        int l1 = INT_MIN;
        int l2 = INT_MIN;
        int r1 = INT_MAX;
        int r2 = INT_MAX;
        if (mid1 - 1 >= 0)
        {
            l1 = a[mid1 - 1];
        }
        if (mid2 - 1 >= 0)
        {
            l2 = b[mid2 - 1];
        }
        if (mid1 < m)
        {
            r1 = a[mid1];
        }
        if (mid2 < n)
        {
            r2 = b[mid2];
        }
        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }
        else if (l1 > r2)
        {
            high = mid1 - 1;
        }
        else
        {
            low = mid1 + 1;
        }
    }
    return 0;
}

int main()
{
    vector<int> a = {100, 112, 256, 349, 770};
    vector<int> b = {72, 86, 113, 119, 265, 445, 892};
    int k = 7;
    cout << "ans is " << kthElement(a, b, k);
}