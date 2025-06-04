#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string removeOuterParentheses(string s)
{
    string ans = "";
    int counter = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (counter > 0)
            {
                ans += s[i];
            }
            counter = counter + 1;
        }
        else
        {
            counter = counter - 1;
            if (counter > 0)
            {
                ans += s[i];
            }
        }
    }
    return ans;
}

int main()
{
    string s = "(()())(())";
    string ans = removeOuterParentheses(s);
    cout << ans << endl;
    return 0;
}