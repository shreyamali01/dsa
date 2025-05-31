#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countFreq(vector<int> &arr, int target)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 2, 3};
    int target = 2;
}