#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;

int maxLen(vector<int> &arr)
{
    int n = arr.size();
    int presum = 0;
    int len = 0;
    int maxi = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        presum = presum + arr[i];
        if (presum == 0)
        {
            maxi = i + 1;
        }
        else if (mp.find(presum) != mp.end())
        {
            maxi = max(maxi, i - mp[presum]);
        }
        if (mp.find(presum) == mp.end())
        {
            mp[presum] = i;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {1, -1, 3, 2, -2, -8, 1, 7, 10, 23};
    cout << "ans is " << maxLen(arr);
}