#include <bits/stdc++.h>
using namespace std;

void bubbleSortRecursive(vector<int>& arr, int n){
    if (n==1){
        return;
    }
    int max_var = 0;
    for (int i=0; i<n; i++){
        if (arr[i]>arr[max_var]){
            max_var = i;
        }
    }
    swap(arr[n-1],arr[max_var]);
    
    return bubbleSortRecursive(arr,n-1);
}

void bubbleSort(vector<int>& arr) {
    bubbleSortRecursive(arr, arr.size());
}

int main(){
    int n;
    cin >> n;
    int val;
    vector <int> arr;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }
    bubbleSort(arr);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}