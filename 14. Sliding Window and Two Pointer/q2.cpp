#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int n = nums.size();
        int max_len = 0;
        for (int i = 0; i < n; i++)
        {
            int zero = 0;
            for (int j = i; j < n; j++)
            {
                if (nums[j] == 0)
                {
                    zero++;
                }
                if (zero > k)
                {
                    break;
                }
                max_len = max(max_len, j - i + 1);
            }
        }
        return max_len;
    }
};