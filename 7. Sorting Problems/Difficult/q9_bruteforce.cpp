#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int inversionCount(vector<int> &arr)
{
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                cnt = cnt + 1;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {2, 4, 1, 3, 5};
    cout << "the answer is " << inversionCount(arr);
}