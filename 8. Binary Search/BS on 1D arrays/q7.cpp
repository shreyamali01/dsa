#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int start = -1;
    int end = -1;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target && start == -1)
        {
            start = i;
        }
        if (nums[i] == target && start != -1)
        {
            end = i;
        }
    }
    ans = {start, end};
    return ans;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = searchRange(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}