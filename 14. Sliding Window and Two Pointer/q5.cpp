#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum = sum + nums[j];
                if (sum == goal)
                {
                    cnt = cnt + 1;
                }
                if (sum > goal)
                {
                    break;
                }
            }
        }
        return cnt;
    }
};