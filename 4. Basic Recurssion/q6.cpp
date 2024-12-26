#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int n = s.size();

    int f = 0;
    int b = n-1;
    
    while(f<b){

        if(isalnum(s[f]) && isalnum(s[b])){
            //cout << s[f] << " " << s[b] << endl;
            if (tolower(s[f])==tolower(s[b])){
                f++;
                b--;
            }
            else{
                return false;
            }
        }

        else if (!isalnum(s[f])){
            f++;
        }

        else{
            b--;
        }
        
    }

    return true;
    
}

int main(){
    string s;
    getline(cin,s);
    bool ans = isPalindrome(s);
    cout << "The ans is " << ans;
    return 0;
}