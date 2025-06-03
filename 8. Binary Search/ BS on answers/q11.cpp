#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findNumPainters(vector<int> arr, int mid, int k)
{
    int sum = 0;
    int num_painter = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (num_painter > k)
        {
            return num_painter;
        }
        sum += arr[i];
        if (sum > mid)
        {
            num_painter += 1;
            sum = arr[i];
        }
    }
    return num_painter;
}

int minTime(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0;
    int high = 0;
    int ans = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        low = max(arr[i], low);
        high += arr[i];
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int num_painters = findNumPainters(arr, mid, k);
        if (num_painters > k)
        {
            low = mid + 1;
        }
        else
        {
            ans = min(ans, mid);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {5, 10, 30, 20, 15};
    int k = 3;
    cout << "ans is " << minTime(arr, k);
}