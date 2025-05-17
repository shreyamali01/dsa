#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> sub;
        for (int j = 0; j < i + 1; j++)
        {
            if ((j == 0) || (j == (i)))
            {
                sub.push_back(1);
            }
            else
            {
                sub.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
            }
        }
        ans.push_back(sub);
    }
    return ans;
}

int main()
{
    int numRows = 5;
    vector<vector<int>> ans = generate(numRows);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
