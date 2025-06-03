#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int splitArray(vector<int> &nums, int k)
{
    int sub_sum1 = 0;
    int sub_sum2 = 0;
    int total_sum = 0;
    int max_sum_among_subarrays = 0;
    int min_max_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        total_sum += nums[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        sub_sum1 += nums[i];
        sub_sum2 = total_sum - sub_sum1;
        max_sum_among_subarrays = max(sub_sum1, sub_sum2);
        min_max_sum = min(max_sum_among_subarrays, min_max_sum);
    }
    return min_max_sum;
}

int main()
{
    vector<int> arr = {7, 2, 5, 10, 8};
    int k = 2;
    cout << "ans is " << splitArray(arr, k);
}