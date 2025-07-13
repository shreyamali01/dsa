#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    // consider all the subarrays having k or less than k elements
    int helperFunc(vector<int> &nums, int k)
    {
        if (k < 0)
        {
            return 0;
        }
        int left = 0;
        int right = 0;
        int n = nums.size();
        int cnt = 0;
        unordered_map<int, int> mpp;
        while (right < n)
        {
            mpp[nums[right]]++;
            while (mpp.size() > k)
            {
                mpp[nums[left]]--;
                if (mpp[nums[left]] == 0)
                {
                    mpp.erase(nums[left]);
                }
                left = left + 1;
            }
            cnt = cnt + (right - left + 1);
            right++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return helperFunc(nums, k) - helperFunc(nums, k - 1);
    }
};