#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
    int largest_num = arr[0];
    for (int i=0; i<arr.size(); i++){
        if (arr[i]>largest_num){
            largest_num = arr[i];
        }
    }
    return largest_num;
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
    int ans = largest(arr);
    cout << "the answer is " << ans;
    return 0;
}