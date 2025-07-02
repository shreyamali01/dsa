#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> DQ;
        for (int i = 0; i < k; i++)
        {
            while (!DQ.empty() && nums[DQ.back()] < nums[i])
            {
                DQ.pop_back();
            }
            DQ.push_back(i);
        }
        for (int i = k; i < nums.size(); i++)
        {
            ans.push_back(nums[DQ.front()]);
            while (!DQ.empty() && DQ.front() <= i - k)
            {
                DQ.pop_front();
            }
            while (!DQ.empty() && nums[DQ.back()] < nums[i])
            {
                DQ.pop_back();
            }
            DQ.push_back(i);
        }
        ans.push_back(nums[DQ.front()]);
        return ans;
    }
};