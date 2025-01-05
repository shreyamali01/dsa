#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;

    for (int i=0; i<nums.size(); i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
        
    }
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
    moveZeroes(nums);
    return 0;
} 
