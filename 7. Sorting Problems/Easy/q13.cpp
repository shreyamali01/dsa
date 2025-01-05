#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int actual_sum = ((n*(n+1))/2);
    for (int i = 0; i<n; i++){
        sum += nums[i];
    }  
    return actual_sum - sum;
}

int main(){
    int n;
    cin >> n;
    vector <int> nums;
    int val;
    for (int i=0; i<n; i++){
        cin >> val;
        nums.push_back(val);
    }
    cout << endl;
    int ans = missingNumber(nums);
    cout << "ans " << ans;
    return 0;
} 