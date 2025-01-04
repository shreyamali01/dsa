#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int firstLar = -1;
    int secLar = -1;
    for (int i=0; i<arr.size(); i++){
        if (arr[i]>firstLar){
            secLar = firstLar;
            firstLar = arr[i];
        }

        else if(arr[i]<firstLar && arr[i]>secLar){
            secLar = arr[i];
        }
    }
    

    return secLar;
    
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
    int ans = getSecondLargest(arr);
    cout << "the answer is " << ans;
    return 0;
}