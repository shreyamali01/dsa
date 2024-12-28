#include <bits/stdc++.h>
using namespace std;

void insertionSortRecurssive(vector<int>& arr, int n) {
    if (n==1){                                          
        return;
    }

    insertionSortRecurssive(arr, n-1);
    int i = n-1;
    while ((i>0)&&(arr[i-1]>arr[i])){
        swap(arr[i-1],arr[i]);
        i--;
    }
}

void insertionSort(vector<int>& arr) {
    insertionSortRecurssive(arr,arr.size());
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
    insertionSort(arr);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}