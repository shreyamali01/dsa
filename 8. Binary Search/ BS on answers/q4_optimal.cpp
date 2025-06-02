#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int possible_bouquets(vector<int> bloomDay, int mid, int k)
{
    int count = 0;
    int num_bouquets = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (mid >= bloomDay[i])
        {
            count = count + 1;
        }
        else
        {
            num_bouquets += count / k;
            count = 0;
        }
    }
    return num_bouquets += count / k;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    int min_ele = INT_MAX;
    int max_ele = INT_MIN;
    int n = bloomDay.size();
    if ((long long)m * k > n)
    {
        return -1;
    }
    for (int i = 0; i < bloomDay.size(); i++)
    {
        min_ele = min(bloomDay[i], min_ele);
        max_ele = max(bloomDay[i], max_ele);
    }
    int low = min_ele;
    int high = max_ele;
    int min_days = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int num_bouquets = possible_bouquets(bloomDay, mid, k);
        if (num_bouquets >= m)
        {
            min_days = min(min_days, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return min_days;
}

int main()
{
    vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
    int m = 2;
    int k = 3;
    cout << "ans is " << minDays(bloomDay, m, k);
}