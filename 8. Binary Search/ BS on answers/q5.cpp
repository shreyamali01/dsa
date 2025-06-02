#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sum_calc(vector<int> &nums, int mid)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += ceil((double)nums[i] / (double)mid);
    }
    return sum;
}

int smallestDivisor(vector<int> &nums, int threshold)
{
    int max_ele = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        max_ele = max(max_ele, nums[i]);
    }
    int low = 1;
    int high = max_ele;
    int smallest_divisor = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sum = sum_calc(nums, mid);
        if (sum <= threshold)
        {
            smallest_divisor = min(smallest_divisor, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return smallest_divisor;
}

int main()
{
    vector<int> nums = {44, 22, 33, 11, 1};
    int threshold = 5;
    cout << "ans is " << smallestDivisor(nums, threshold);
}