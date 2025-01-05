#include <bits/stdc++.h>
using namespace std;

// works for negative numbers too

int lenOfLongestSubarr(vector<int>& arr, int k) {
    map <int, int> mpp;
    int presum = 0;
    
    int max_len = 0;
    for (int i=0; i<arr.size(); i++){
        int len = 0;
        presum += arr[i];
        
        // if presum already is in the array
        if (mpp.find(presum)==mpp.end()){
            mpp[presum] = i;
        }
        
        if (mpp.find(presum-k)!=mpp.end()){
            len = i - mpp[presum - k];
        }
        if (presum == k){
            len = i+1;
        }
        max_len = max(len, max_len);
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
    int ans = lenOfLongestSubarr(nums, k);
    cout << "ans " << ans;
    return 0;
}