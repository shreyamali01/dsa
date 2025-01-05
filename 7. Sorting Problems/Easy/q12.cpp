#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
    int ptr1 = 0;
    int ptr2 = 0;

    int n = arr1.size();
    int m = arr2.size();

    vector <int> output;

    while((ptr1<n)&&(ptr2<m)){
        if (arr1[ptr1]==arr2[ptr2]){
            if (output.empty() || output.back()!=arr1[ptr1]){
                output.push_back(arr1[ptr1]);
            }
            ptr1++;
            ptr2++;
            
        }
        else if (arr1[ptr1]<arr2[ptr2]){
            ptr1++;
        }
        
        else {
            ptr2++;
        }
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

    vector <int> output = intersection(arr1, arr2);
    for (int i=0; i<output.size(); i++){
        cout << output[i];
    }

    return 0;
}