#include <bits/stdc++.h>
#include <iostream>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int floor = -1;
    int ceil = -1;
    pair<int, int> ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == x)
        {
            floor = a[mid];
            ceil = a[mid];
            ans = {floor, ceil};
            return ans;
        }
        if (a[mid] > x)
        {
            ceil = a[mid];
            high = mid - 1;
        }
        else
        {
            floor = a[mid];
            low = mid + 1;
        }
    }
    ans = {floor, ceil};
    return ans;
}

int main()
{
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    int target = 8;
    pair<int, int> ans = getFloorAndCeil(nums, nums.size(), target);
    cout << ans.first << " " << ans.second;
}