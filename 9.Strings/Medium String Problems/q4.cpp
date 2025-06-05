#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int myAtoi(string s)
{
    int i = 0;
    int n = s.size();
    string ans = "";
    bool isNegative = false;
    // skip spaces
    while (i < n && s[i] == ' ')
    {
        i++;
    }

    if (i < n && (s[i] == '-' || s[i] == '+'))
    {
        if (s[i] == '-')
        {
            isNegative = true;
            i++;
        }
        else
        {
            isNegative = false;
            i++;
        }
    }
    while (i < n && isdigit(s[i]))
    {
        ans += s[i];
        i++;
    }
    if (ans.size() == 0)
    {
        return 0;
    }
    long res = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        res = res * 10 + (ans[i] - '0');

        if (!isNegative && res > INT_MAX)
            return INT_MAX;
        if (isNegative && -res < INT_MIN)
            return INT_MIN;
    }
    if (isNegative)
    {
        res = -res;
    }
    return res;
}

int main()
{
    cout << myAtoi(" -1337c0d3");
}