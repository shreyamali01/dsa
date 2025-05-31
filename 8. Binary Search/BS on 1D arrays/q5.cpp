#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findFloor(vector<int> &arr, int x)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] <= x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    cout << "ans is " << findFloor(nums, target);
}