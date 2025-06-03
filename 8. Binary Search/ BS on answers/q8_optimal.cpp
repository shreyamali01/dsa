#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int canThisMinDistWork(vector<int> &stalls, int k, int mid)
{
    int last_cow = stalls[0];
    int num_cow = 1;
    for (int i = 0; i < stalls.size(); i++)
    {
        if (num_cow >= k)
        {
            return num_cow;
        }
        if ((stalls[i] - last_cow) >= mid)
        {
            num_cow += 1;
            last_cow = stalls[i];
        }
    }
    return num_cow;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n - 1] - stalls[0];
    int distance = INT_MIN;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int num_cows_placed = canThisMinDistWork(stalls, k, mid);
        if (num_cows_placed >= k)
        {
            distance = max(distance, mid);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return distance;
}

int main()
{
    vector<int> arr = {1, 5, 17};
    int k = 2;
    cout << "ans is " << aggressiveCows(arr, k);
}