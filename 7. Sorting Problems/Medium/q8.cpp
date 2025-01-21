#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    int maxi = arr[n-1];
    vector <int> output;
    for (int i = n-1; i>=0; i--){
        if (arr[i]>=maxi){
            output.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    reverse(output.begin(),output.end());
    return output;
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
    vector <int> output = leaders(arr);
    for (int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    return 0;
}