#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int splitsPossible(vector<int> &nums, int k, int mid)
{
    int num_subarrays = 1;
    int sum_possible = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum_possible += nums[i];
        if (num_subarrays > k)
        {
            return num_subarrays;
        }
        if (sum_possible > mid)
        {
            num_subarrays += 1;
            sum_possible = nums[i];
        }
    }
    return num_subarrays;
}

int splitArray(vector<int> &nums, int k)
{
    int n = nums.size();
    if (k > n)
    {
        return -1;
    }
    int sum = 0;
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        max_ele = max(max_ele, nums[i]);
    }
    int low = max_ele;
    int high = sum;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int num_subarrays = splitsPossible(nums, k, mid);
        if (num_subarrays <= k)
        {
            ans = min(ans, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    cout << "ans is " << splitArray(arr, k);
}