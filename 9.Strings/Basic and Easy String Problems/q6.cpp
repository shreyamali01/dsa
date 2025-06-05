#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool rotateString(string s, string goal)
{
    if (s.size() != goal.size())
    {
        return false;
    }
    if (s == goal)
    {
        return true;
    }
    for (int i = 1; i < s.size(); i++)
    {
        string ans = "";
        for (int j = 0; j < s.size(); j++)
        {
            ans += s[(j + i) % s.size()];
            if (goal == ans)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string s = "abcde";
    string goal = "cdeab";
    cout << rotateString(s, goal);
    return 0;
}
