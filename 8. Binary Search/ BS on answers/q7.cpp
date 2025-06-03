#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    if (k < arr[0])
    {
        return k;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= k)
        {
            k++;
        }
        else
        {
            return k;
        }
    }
    return k;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "ans is " << findKthPositive(arr, k);
}