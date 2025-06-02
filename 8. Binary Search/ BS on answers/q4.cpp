#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int possible(vector<int> bloomDay, int day, int k)
{
    int count = 0;
    int num_bouq = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (day >= bloomDay[i])
        {
            count = count + 1;
        }
        else
        {
            num_bouq = num_bouq + count / k;
            count = 0;
        }
    }
    num_bouq = num_bouq + count / k;
    return num_bouq;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    int n = bloomDay.size();
    int min_days = INT_MAX;
    if (m * k > n)
    {
        return -1;
    }
    int min_ele = INT_MAX;
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        min_ele = min(min_ele, bloomDay[i]);
        max_ele = max(max_ele, bloomDay[i]);
    }
    for (int i = min_ele; i <= max_ele; i++)
    {
        int num_bouq = possible(bloomDay, i, k);
        if (num_bouq >= m)
        {
            min_days = min(min_days, i);
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