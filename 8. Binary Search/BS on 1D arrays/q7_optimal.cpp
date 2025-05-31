#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int first = -1;
    int last = -1;
    vector<int> ans;
    // finding first occurence
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    low = 0;
    high = nums.size() - 1;
    if (first == -1)
    {
        return ans = {-1, -1};
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    ans = {first, last};
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