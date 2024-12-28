#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout << "Enter your string ";
    cin >> s;
    cout << endl;

    cout << "Enter number of queries ";
    int q;
    cin >> q;
    cout << endl;

    int hash[26] = {0};

    for (int i=0; i<s.size(); i++){
        hash[s[i]-'a'] += 1;
    }



    while(q--){
        char c;
        cout << "enter your query " << endl;
        cin >> c;
        cout << endl;
        cout << "number of times " << c << "has occured is" << hash[c-'a'];
        cout << endl;
    }

    return 0;
}