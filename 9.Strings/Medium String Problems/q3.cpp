#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int romanToInt(string s)
{
    int ans = 0;
    int n = s.size();
    int i = 0;
    while (i < n)
    {
        // I preceeding V and X
        if (s[i] == 'I' && i != n - 1)
        {
            if (s[i + 1] == 'V')
            {
                ans += 4;
                i = i + 2;
            }
            else if (s[i + 1] == 'X')
            {
                ans += 9;
                i = i + 2;
            }
            else
            {
                ans += 1;
                i = i + 1;
            }
        }

        // X preceeding L and C
        else if (s[i] == 'X' && i != n - 1)
        {
            if (s[i + 1] == 'L')
            {
                ans += 40;
                i = i + 2;
            }
            else if (s[i + 1] == 'C')
            {
                ans += 90;
                i = i + 2;
            }
            else
            {
                ans += 1;
                i = i + 1;
            }
        }

        // C preceeding D and M
        else if (s[i] == 'C' && i != n - 1)
        {
            if (s[i + 1] == 'D')
            {
                ans += 400;
                i = i + 2;
            }
            else if (s[i + 1] == 'M')
            {
                ans += 900;
                i = i + 2;
            }
            else
            {
                ans += 1;
                i = i + 1;
            }
        }

        else if (s[i] == 'I')
        {
            ans += 1;
            i++;
        }
        else if (s[i] == 'V')
        {
            ans += 5;
            i++;
        }
        else if (s[i] == 'X')
        {
            ans += 10;
            i++;
        }
        else if (s[i] == 'L')
        {
            ans += 50;
            i++;
        }
        else if (s[i] == 'C')
        {
            ans += 100;
            i++;
        }
        else if (s[i] == 'D')
        {
            ans += 500;
            i++;
        }
        else if (s[i] == 'M')
        {
            ans += 1000;
            i++;
        }
    }
    return ans;
}

int main()
{
    cout << romanToInt("MCMXCIV");
}