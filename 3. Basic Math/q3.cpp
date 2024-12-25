#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> bin_num(32,0); // a vector with all values as 0 to store the binary form of the decimal number
    cout << "Original Binary number" << endl;
    for(int i=0; i<bin_num.size(); i++){
        cout << bin_num[i] << " ";
    }
    cout << endl;

    int num;
    int i=0;
    while(n!=0){
        num = n%2;
        bin_num[i] = num;
        i++;
        n = n/2;
    }
    cout << "Binary Number" << endl;
    for(int i=0; i<bin_num.size(); i++){
        cout << bin_num[i] << " ";
    }
    cout << endl;
   

    int dec_num = 0;
    int power = bin_num.size()-1;
    for (int i = 0; i < bin_num.size(); i++) {
        dec_num += bin_num[i] * pow(2, power);
        power--;
    }
    
    cout << "The decimal number is " << dec_num;
    return dec_num;
}