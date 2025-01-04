#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    // checking drops within
    for (int i=0; i<nums.size()-1; i++) {

        if (nums[i]>nums[i+1]){    
            count++;
        }      
    }
    // chcecking drops outside
    if (nums[0]<nums[nums.size()-1]){
            count++;
    }

    if (count >= 2){
            return 0;
        }
    else{
        return 1;
    }
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
    bool ans = check(arr);
    cout << "the answer is " << ans;
    return 0;
} 