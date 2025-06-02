#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long total_time_func(vector<int> piles, int mid)
{
    long long total_time = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        total_time = total_time + ceil(piles[i] / mid);
    }
    return total_time;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    int max_ele = INT_MIN;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        max_ele = max(max_ele, piles[i]);
    }
    int low = 1;
    int high = max_ele;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long total_time = total_time_func(piles, mid);
        if (total_time <= h)
        {
            ans = min(ans, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << "ans is " << minEatingSpeed(piles, h);
}
