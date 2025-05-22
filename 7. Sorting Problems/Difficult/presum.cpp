#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> presum_array(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
        presum_array[i] = sum;
    }
    int res = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int diff = presum_array[i] - k;
        if (presum_array[i] == k)
        {
            res = res + 1;
        }
        if (mp.find(diff) != mp.end())
        {
            res = res + mp[diff];
        }
        mp[presum_array[i]] += 1;
    }
    return res;
}

int main()
{
    int k = 2;
    vector<int> nums = {1, 1, 1};
    cout << "ans is " << subarraySum(nums, k);
}