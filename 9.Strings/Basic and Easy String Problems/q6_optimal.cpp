#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool rotateString(string s, string goal)
{
    if (s == goal)
    {
        return true;
    }
    if (s.size() != goal.size())
    {
        return false;
    }
    string concat = s + s;
    if (concat.find(goal) != -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "abcde";
    string goal = "cdeab";
    cout << rotateString(s, goal);
    return 0;
}