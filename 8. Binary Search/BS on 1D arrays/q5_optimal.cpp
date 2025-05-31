#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findFloor(vector<int> &arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    cout << "ans is " << findFloor(nums, target);
}