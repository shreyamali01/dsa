#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxLen(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        if (sum == 0)
        {
            cnt = max(cnt, 1);
        }
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == 0)
            {
                cnt = max(cnt, (j - i + 1));
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {2, 10, 4};
    cout << "ans is " << maxLen(arr);
}