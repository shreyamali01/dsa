#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long subarrayXor(vector<int> &arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int xr = arr[i];
        if (arr[i] == k)
        {
            cnt = cnt + 1;
        }
        for (int j = i + 1; j < n; j++)
        {
            xr = xr ^ arr[j];
            if (xr == k)
            {
                cnt = cnt + 1;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    long ans = subarrayXor(arr, k);
    cout << " ans " << ans;
}