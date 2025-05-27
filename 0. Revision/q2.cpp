#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> maxSubarrayIndx(vector<int> &nums)
{
    int maxi = INT_MIN;
    int sum = 0;
    int start_idx = 0;
    int end_idx = 0;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
        {
            start_idx = i;
        }
        sum = sum + nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            end_idx = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    ans = {start_idx, end_idx};
    return ans;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> ans = maxSubarrayIndx(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}