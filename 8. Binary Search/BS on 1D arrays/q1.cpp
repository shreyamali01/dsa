#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (r - l) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << "ans is " << search(nums, target);
}