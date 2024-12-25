#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> input(2);
    for (int i=0; i<input.size();i++){
        cin >> input[i];
    }
    int a = input[0];
    int b = input[1];
    int prod = (a*b);
    int GCD;
    int t;
    while(a>0 && b>0){
        if (a>=b){ //18,12 12,6 6,0
            t = b;  
            b = (a%b); //18,12 6,6 0,0
            a = t;
        }
        else if(a<b){
            t = a;
            a = (b%a);
            b = t;
        }
    }
    if(a==0){
        //cout << "GCD is " << b;
        GCD = b;
    }
    else{
        //cout << "GCD is " << a;
        GCD = a;
    }

    int LCM = prod / GCD;
    
    vector<int> output(2);
    output[0] = LCM;
    output[1]=GCD;
    for (int i=0; i<output.size();i++){
        cout << output[i] << " ";
    }

    return 0;
}