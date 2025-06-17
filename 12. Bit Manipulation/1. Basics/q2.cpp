#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int pow(int x, int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * x;
    }
    return res;
}

int binarytoDecimal(string str)
{
    int ans = 0;
    int n = str.size();
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += (str[i] - '0') * pow(2, cnt);
        cnt += 1;
    }
    return ans;
}

int main()
{
    string s = "1101";
    cout << binarytoDecimal(s);
}
