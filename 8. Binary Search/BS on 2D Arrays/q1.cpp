#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int minRow(vector<vector<int>> &mat)
{
    int ans = INT_MAX;
    int count_min = INT_MAX;
    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count += 1;
            }
        }
        if (count < count_min)
        {
            count_min = count;
            ans = i;
        }
    }
    return ans + 1;
}

int main()
{
    vector<vector<int>> mat = {{1, 1, 1, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 1, 1, 1}};
    cout << "ans is " << minRow(mat);
}