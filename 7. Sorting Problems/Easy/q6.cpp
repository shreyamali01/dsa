#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for(int j=1; j<nums.size(); j++){
        if (nums[i]!=nums[j]){
            swap(nums[i+1],nums[j]);
            i++;
        }
    }
    return (i+1);
}


int main(){
    int n;
    cin >> n;
    vector <int> arr;
    int val;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }
    cout << endl;
    int ans = removeDuplicates(arr);
    cout << "the answer is " << ans;
    return 0;
} 