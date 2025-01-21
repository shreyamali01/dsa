#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int piv = -1;
    int piv_index = -1;
    for (int i =n-1; i>0; i--){
        if(nums[i-1]<nums[i]){
            piv = nums[i-1];
            piv_index = i-1;
            break;
        }    
    }
    
    // If no pivot is found
    if (piv == -1) {
        reverse(nums.begin(),nums.end());
        return;
    }


    for (int i = n-1; i>0; i--){
        if (nums[i]>piv){
            swap(nums[i],nums[piv_index]);
            reverse(nums.begin()+piv_index+1, nums.end());
            return;
        }
    }
    
    cout << "The pivot is " << piv;
    
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
    nextPermutation(arr);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;

}