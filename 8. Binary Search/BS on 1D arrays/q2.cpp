#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lowerBound(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > target)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> nums = {2, 3, 7, 10, 11, 11, 25};
    int target = 9;
    cout << "ans is " << lowerBound(nums, target);
}