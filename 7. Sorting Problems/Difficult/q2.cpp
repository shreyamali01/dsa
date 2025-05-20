#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int ele1 = INT16_MIN;
    int ele2 = INT16_MIN;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt1 == 0 && ele2 != nums[i])
        {
            ele1 = nums[i];
            cnt1++;
        }
        else if (cnt2 == 0 && ele1 != nums[i])
        {
            ele2 = nums[i];
            cnt2++;
        }
        else if (ele1 == nums[i])
        {
            cnt1++;
        }
        else if (ele2 == nums[i])
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    int majcnt1 = 0;
    int majcnt2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == ele1)
        {
            majcnt1++;
        }
        if (nums[i] == ele2)
        {
            majcnt2++;
        }
    }
    vector<int> ans;
    if (majcnt1 > (nums.size() / 3))
    {
        ans.push_back(ele1);
    }
    if ((majcnt2) > (nums.size()) / 3)
    {
        ans.push_back(ele2);
    }

    return ans;
}

int main()
{
    vector<int> nums = {3, 2, 3};
    vector<int> ans = majorityElement(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}