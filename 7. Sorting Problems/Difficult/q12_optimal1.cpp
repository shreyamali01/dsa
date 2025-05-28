#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> findTwoElement(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    long long s = 0;
    long long s2 = 0;

    for (int i = 0; i < n; i++)
    {
        s += (long long)arr[i];
        s2 += (long long)arr[i] * (long long)arr[i];
    }

    long long sn = (long long)n * (n + 1) / 2;
    long long s2n = (long long)n * (n + 1) * (2 * n + 1) / 6;

    long long diff = s - sn;        // x - y
    long long diff_sq = s2 - s2n;   // x^2 - y^2
    long long sum = diff_sq / diff; // x + y

    int repeating = (diff + sum) / 2;
    int missing = sum - repeating;

    return {repeating, missing};
}

int main()
{
    vector<int> arr = {2, 2};
    vector<int> ans = findTwoElement(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}