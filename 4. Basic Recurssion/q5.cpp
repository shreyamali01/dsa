#include <bits/stdc++.h>
using namespace std;

string reverseString(string& s) {
    int n = s.size();
    if (n == 0){
        return " ";
    }
    
    char last = s[n-1];
    s.pop_back();
    return s[n-1]+ reverseString(s);    
    }

int main(){
    return 0;
}