#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int largestAreaHistogram(vector<int> row)
    {
        int max_area = 0;
        int n = row.size();
        stack<int> st;
        int nse;
        int pse;
        int ele;
        for (int i = 0; i < row.size(); i++)
        {
            while (!st.empty() && row[st.top()] > row[i])
            {
                ele = st.top();
                st.pop();
                nse = i;
                if (st.empty())
                {
                    pse = -1;
                }
                else
                {
                    pse = st.top();
                }
                max_area = max(max_area, row[ele] * (nse - pse - 1));
            }
            st.push(i);
        }
        while (!st.empty())
        {
            ele = st.top();
            st.pop();
            nse = n;
            if (st.empty())
            {
                pse = -1;
            }
            else
            {
                pse = st.top();
            }
            max_area = max(max_area, row[ele] * (nse - pse - 1));
        }
        return max_area;
    }

    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> newMatrix(n, vector<int>(m));
        // creating new matrix
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += matrix[i][j] - '0';
                if (matrix[i][j] == '0')
                {
                    sum = 0;
                    newMatrix[i][j] = 0;
                }
                else
                {
                    newMatrix[i][j] = sum;
                }
            }
        }

        // iterating through new matrix
        int max_area = 0;
        for (int i = 0; i < n; i++)
        {
            int area = largestAreaHistogram(newMatrix[i]);
            max_area = max(area, max_area);
        }
        return max_area;
    }
};