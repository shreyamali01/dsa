#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxDepth(string s)
{
    int cnt = 0;
    int max_cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            cnt = cnt + 1;
            max_cnt = max(cnt, max_cnt);
        }
        else if (s[i] == ')')
        {
            cnt = cnt - 1;
        }
    }
    if (cnt == 0)
    {
        return max_cnt;
    }
    return -1;
}

int main()
{
    cout << maxDepth("(1+(2*3)+((8)/4))+1");
}