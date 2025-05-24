#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

long subarrayXor(vector<int> &arr, int k)
{
    int res = 0;
    int n = arr.size();
    long cnt = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
        if (res == k)
        {
            cnt = cnt + 1;
        }
        else if (mp.find(k ^ res) != mp.end())
        {
            cnt = cnt + mp[k ^ res];
        }
        mp[res] += 1;
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