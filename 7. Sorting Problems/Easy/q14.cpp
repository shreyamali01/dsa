#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int max_count = 0;
    for (int i= 0; i<nums.size(); i++){
        if (nums[i]==1){
            count++;
            max_count = max(count, max_count);
        }
        else {
            count = 0;
        }
    }
    return max_count;
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
    int ans = findMaxConsecutiveOnes(nums);
    cout << "ans " << ans;
    return 0;
}