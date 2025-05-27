#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void mergeArrays(vector<int> &a, vector<int> &b)
{
    int i = a.size() - 1;
    int j = 0;
    while ((i >= 0) && (j < b.size()))
    {
        if (a[i] > b[j])
        {
            swap(a[i], b[j]);
            i--;
            j++;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}

int main()
{
    vector<int> a = {2, 4, 7, 10};
    vector<int> b = {2, 3};
    mergeArrays(a, b);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    for (int j = 0; j < b.size(); j++)
    {
        cout << b[j] << " ";
    }
}