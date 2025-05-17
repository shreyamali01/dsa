#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<int> ans;
    long long val = 1;
    ans.push_back(val);
    for (int i = 1; i <= rowIndex; i++)
    {
        val = val * (rowIndex - i + 1);
        val = val / i;
        ans.push_back(val);
    }
    return ans;
}

int main()
{
    int rowIndex = 4;
    vector<int> ans = getRow(rowIndex);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}