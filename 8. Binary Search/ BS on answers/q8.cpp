#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findNumCows(vector<int> &stalls, int k, int min_dist)
{
    int cow_count = 1;
    int last_pos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (cow_count >= k)
        {
            break;
        }
        if ((stalls[i] - last_pos) >= min_dist)
        {
            cow_count += 1;
            last_pos = stalls[i];
        }
    }
    return cow_count;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int distance = stalls[n - 1] - stalls[0];
    int min_distance = INT_MIN;
    for (int i = 1; i <= distance; i++)
    {
        // if i keep the minimum distance to be i then how many cows can i place?
        int num_cows = findNumCows(stalls, k, i);
        if (num_cows >= k)
        {
            min_distance = max(min_distance, i);
        }
    }
    return min_distance;
}

int main()
{
    vector<int> arr = {1, 5, 17};
    int k = 2;
    cout << "ans is " << aggressiveCows(arr, k);
}