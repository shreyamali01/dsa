#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int sum = 0;
    int max_len = 0;
    int i = 0;
    int len = 0;
    for (int j=0; j<a.size(); j++){

        sum += a[j];

        while (sum > k && i<=j){
            sum = sum - a[i];
            i++;
        }

        if (sum == k){
            len = (j-i+1);
            max_len = max(len, max_len);
        }

        

    }

    return max_len;
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
    int k;
    cout << "enter k " << endl;
    cin >> k;
    int ans = longestSubarrayWithSumK(nums, k);
    cout << "ans " << ans;
    return 0;
}