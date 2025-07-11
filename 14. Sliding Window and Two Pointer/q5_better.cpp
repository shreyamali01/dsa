#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int cnt = 0;
        int pre_sum = 0;
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[pre_sum]++;
            pre_sum = pre_sum + nums[i];
            if (mpp.find(pre_sum - goal) != mpp.end())
            {
                cnt = cnt + mpp[pre_sum - goal];
            }
        }
        return cnt;
    }
};