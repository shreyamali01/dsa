#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string largestOddNumber(string num)
{
    int n = num.size();
    int j = n - 1;
    while (j >= 0)
    {
        if (((num[j] + '0') % 2) != 0)
        {
            return num.substr(0, j + 1);
        }
        j--;
    }
    return "";
}

int main()
{
    string s = "52";
    string ans = largestOddNumber(s);
    cout << ans << endl;
    return 0;
}
