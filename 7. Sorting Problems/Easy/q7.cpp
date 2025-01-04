#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());

    }

int main(){
    int n;
    cin >> n;
    vector <int> nums;
    int val;
    int k;
    cout << "enter the value of k " << endl;
    cin >> k;
    for (int i=0; i<n; i++){
        cin >> val;
        nums.push_back(val);
    }
    cout << endl;
    rotate(nums, k);
    return 0;
} 