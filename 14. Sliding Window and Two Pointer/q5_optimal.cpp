#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int findLessThanEqualToGoal(vector<int> &nums, int goal)
    {
        if (goal < 0)
        {
            return 0;
        }
        int left = 0;
        int right = 0;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        while (right < n)
        {
            sum = sum + nums[right];
            while (sum > goal)
            {
                sum = sum - nums[left];
                left = left + 1;
            }
            cnt = cnt + (right - left + 1);
            right = right + 1;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return findLessThanEqualToGoal(nums, goal) - findLessThanEqualToGoal(nums, goal - 1);
    }
};