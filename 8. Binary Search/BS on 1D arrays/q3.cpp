#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int recursive_upper_bound(vector<int> arr, int l, int r, int target)
{
    int m = l + (r - l) / 2;
    if (l > r)
    {
        return arr.size();
    }
    if (arr[m] > target && arr[m - 1] <= target)
    {
        return m;
    }
    if (arr[m] > target)
    {
        return recursive_upper_bound(arr, l, m - 1, target);
    }
    else
    {
        return recursive_upper_bound(arr, m + 1, r, target);
    }
}

int upperBound(vector<int> &arr, int target)
{
    return recursive_upper_bound(arr, 0, arr.size() - 1, target);
}

int main()
{
    vector<int> nums = {2, 3, 7, 10, 11, 11, 25};
    int target = 11;
    cout << "ans is " << upperBound(nums, target);
}