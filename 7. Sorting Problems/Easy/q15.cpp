#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int x = 0;
    for (int i=0; i<nums.size(); i++){
        x = x ^ nums[i];
    }
    return x;
    }

int main() {
    int n;
    cin >> n;
    vector <int> nums;
    int val;
    for (int i=0; i<n; i++){
        cin >> val;
        nums.push_back(val);
    }
    cout << endl;
    int ans = singleNumber(nums);
    cout << "ans " << ans;
    return 0;
}

