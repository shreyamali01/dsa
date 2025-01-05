#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int ptr1 = 0;
    int ptr2 = 0;
    int n = a.size();
    int m = b.size();
    vector <int> output;
    while(ptr1<n && ptr2<m) { 
        if (a[ptr1]==b[ptr2]){
            if (output.empty() || output.back()!=a[ptr1]){
               output.push_back(a[ptr1]);
            }
            ptr1++;
            ptr2++; 
        }

        else if (a[ptr1]<b[ptr2]){
            if (output.empty() || output.back()!=a[ptr1]){  
                output.push_back(a[ptr1]);
            }
            ptr1++;
        }

        else {
            if (output.empty() || output.back()!=b[ptr2]){
                output.push_back(b[ptr2]);
            }
            ptr2++;
        }
    }

    while(ptr1<n){
        if (output.empty() || output.back()!=a[ptr1]){
            output.push_back(a[ptr1]);
        }
        ptr1++;
    }
    while(ptr2<m){
        if (output.empty() || output.back()!=b[ptr2]){
            output.push_back(b[ptr2]);
        }
        ptr2++;
    }
    return output;

    }

int main() {
    cout << "enter the value of a" << endl;
    int a;
    cin >> a;
    cout << endl;
    cout << "enter the value of b" << endl;;
    int b;
    cin >> b;
    cout << endl;
    cout << "array a: " << endl;
    vector<int> arr1;
    vector<int> arr2;
    int val1;
    for (int i=0; i<a; i++){
        cin >> val1;
        arr1.push_back(val1);    
    }

    cout << endl;
    cout << "array a: " << endl;
    int val2;
    for (int i=0; i<a; i++){
        cin >> val2;
        arr2.push_back(val2);    
    }

    cout << endl << "output ";

    vector <int> output = findUnion(arr1, arr2);
    for (int i=0; i<output.size(); i++){
        cout << output[i];
    }

    return 0;
}