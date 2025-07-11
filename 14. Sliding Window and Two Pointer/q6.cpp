#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int findCnt(vector<int> &nums, int k)
    {
        if (k < 0)
        {
            return 0;
        }
        int left = 0;
        int right = 0;
        int cnt_k = 0;
        int ans = 0;
        int n = nums.size();
        while (right < n)
        {
            if (nums[right] % 2 != 0)
            {
                cnt_k = cnt_k + 1;
            }
            while (cnt_k > k)
            {
                if (nums[left] % 2 != 0)
                {
                    cnt_k = cnt_k - 1;
                }
                left = left + 1;
            }
            ans = ans + (right - left + 1);
            right = right + 1;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return findCnt(nums, k) - findCnt(nums, k - 1);
    }
};