#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
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
    unordered_map<int, int> m;
    int diff;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        diff = presum_array[i] - k;
        if (presum_array[i] == k)
        {
            res = res + 1;
        }
        if (m.find(diff) != m.end())
        {
            res = res + m[diff];
        }
        m[presum_array[i]] += 1;
    }

    return res;
}

int main()
{
    int k = 6;
    vector<int> nums = {3, 1, 2, 4};
    cout << "ans is " << subarraySum(nums, k);
}