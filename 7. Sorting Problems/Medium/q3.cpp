#include <bits/stdc++.h>
using namespace std;

int freq = 0;
int ans;
int majorityElement(vector<int>& nums) {
    int ans = 0;
    int freq = 0;
    for (int i=0; i<nums.size(); i++){
        if (freq == 0){
            ans = nums[i];
        }
        if (nums[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
        if (freq > (nums.size()/2)){
            return ans;
        }
    }

    int count = 0;
    for (int i=0; i<nums.size();i++){
        if (nums[i]==ans){
            count++;
        }
    }

    if (count > (nums.size()/2)) {
        return ans;
    }
    else{
        return -1;
    }

        
}

int main(){
    int n;
    cin >> n;
    int val;
    vector<int> arr;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }
    int ans = majorityElement(arr);
    cout << "the answer is " << ans;
    return 0;
}

