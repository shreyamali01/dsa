#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int recursive_lower_bound(vector<int> arr, int l, int r, int target)
{
    int m = l + (r - l) / 2;
    int n = arr.size();
    if (l > r)
    {
        return arr.size();
    }
    if (target < arr[0])
    {
        return 0;
    }
    if ((arr[m] >= target) && (arr[m - 1] < target))
    {
        return m;
    }
    if (arr[m] >= target)
    {
        return recursive_lower_bound(arr, l, m - 1, target);
    }
    else
    {
        return recursive_lower_bound(arr, m + 1, r, target);
    }
}

int lowerBound(vector<int> arr, int n, int x)
{
    return recursive_lower_bound(arr, 0, n, x);
}

int main()
{
    vector<int> nums = {2, 3, 7, 10, 11, 11, 25};
    int target = 9;
    cout << "ans is " << lowerBound(nums, nums.size(), target);
}