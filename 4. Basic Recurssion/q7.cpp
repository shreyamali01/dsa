#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
    int f;
    int b;
    int n = arr.size();
    f = 0;
    b = n-1;
    while(f<b){
        swap(arr[f],arr[b]);
        f++;
        b--;
    }

    /*
    for(int i=0; i<arr.size();i++){
        cout << arr[i] << " ";
    }*/
}


int main(){
    vector<int> arr = {1,2,3,4};
    reverseArray(arr);
    return 0;
}