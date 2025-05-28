#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> findTwoElement(vector<int> &arr)
{
    int n = arr.size();
    int hash[n + 1] = {0};
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        (hash[arr[i]]++);
    }
    int missing = -1;
    int repeating = -1;
    for (int i = 1; i < n + 1; i++)
    {
        if (hash[i] == 2)
        {
            repeating = i;
        }
        if (hash[i] == 0)
        {
            missing = i;
        }
    }
    ans = {repeating, missing};
    return ans;
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