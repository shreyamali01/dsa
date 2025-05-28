#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> findTwoElement(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int cnt = 0;
    int ele = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt = cnt + 1;
                if (cnt == 1)
                {
                    ele = arr[j];
                    break;
                }
            }
        }
        if (cnt == 1)
        {
            break;
        }
    }

    int sum_for = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    sum = sum - ele;
    int missing_num = sum_for - sum;
    ans.push_back(ele);
    ans.push_back(missing_num);
    return ans;
}

int main()
{
    vector<int> arr = {2, 2};
    vector<int> ans = findTwoElement(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
