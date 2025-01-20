#include <bits/stdc++.h>
using namespace std;

int pairWithMaxSum(vector<int> &arr) {
    int sum = 0;
    int max_sum = 0;
    for (int i=1; i<arr.size()-1; i++){
        sum = 0;
        sum = arr[i-1] + arr[i];
        max_sum = max(sum,max_sum);
    }
    return max_sum;
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
    int ans = pairWithMaxSum(arr);
    cout << "the answer is " << ans;
    return 0;
}