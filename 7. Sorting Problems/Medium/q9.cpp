#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        
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
    int ans = longestConsecutive(arr);
    cout << "The ans is " << ans;
    return 0;
}
