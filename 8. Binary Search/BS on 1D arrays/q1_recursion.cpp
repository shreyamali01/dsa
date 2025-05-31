#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int recur_search(vector<int> nums, int l, int r, int target)
{
    int mid = (l + r) / 2;
    if (l > r)
    {
        return -1;
    }
    if (target == nums[mid])
    {
        return mid;
    }
    else if (target > nums[mid])
    {
        return recur_search(nums, mid + 1, r, target);
    }
    else
    {
        return recur_search(nums, l, mid - 1, target);
    }
}

int search(vector<int> &nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;
    // handling the overflow case
    int mid = l + (r - l) / 2;
    int ans = recur_search(nums, l, r, target);
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << "ans is " << search(nums, target);
}