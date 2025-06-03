#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int checkDays(vector<int> &weights, int mid)
{
    int num_days = 1;
    int weight_sum = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        weight_sum += weights[i];
        if (weight_sum > mid)
        {
            num_days += 1;
            weight_sum = weights[i];
        }
    }
    return num_days;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int sum = 0;
    int max_ele = 0;
    int least_weight = INT_MAX;
    for (int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
        max_ele = max(max_ele, weights[i]);
    }
    int low = max_ele;
    int high = sum;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int num_days = checkDays(weights, mid);
        if (num_days <= days)
        {
            least_weight = min(least_weight, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return least_weight;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int min_weight = shipWithinDays(nums, days);
    cout << "ans is " << min_weight;
}