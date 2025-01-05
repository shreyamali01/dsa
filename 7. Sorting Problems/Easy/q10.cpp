#include <bits/stdc++.h>
using namespace std;

bool searchInSorted(vector<int>& arr, int k) {
    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high){
        int mid = (low + high)/2;
        if(k==arr[mid]){
            return 1;
        }
        else if (k>arr[mid]){
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
    }

int main(){
    int n;
    cin >> n;
    vector <int> arr;
    int val;
    int k;
    cout << "enter the vale of k " << endl;
    cin >> k;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }
    cout << endl;
    bool ans = searchInSorted(arr, k);
    cout << "the answer is " << ans;
    return 0;
} 