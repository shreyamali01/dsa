#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
int low = 0;
int mid = 0;  
int high = nums.size()-1;
while(mid <= high){
    if (nums[mid] == 0){
        swap(nums[low],nums[mid]);
        mid++;
        low++;
    }
    else if (nums[mid]==1){
        mid++;
    }
    else {
        swap(nums[mid],nums[high]);
        high--;
    }
}    
}

int main() {
    int n;
    cin >> n;
    int val;
    vector <int> arr;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }
    sortColors(arr);
    for (int i =0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}