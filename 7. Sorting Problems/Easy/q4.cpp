#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    // start with the assumption that the array is sorted
    int ans = 1;
    for (int i=0; i<n-1; i++){
        if (a[i]>a[i+1]){
            return 0;
        }
    }

    return ans;
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
    int ans = isSorted(n,arr);
    cout << "the answer is " << ans;
    return 0;
}