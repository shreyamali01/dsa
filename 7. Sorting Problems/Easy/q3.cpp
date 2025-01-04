#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int firstLar = -1;
    int secLar = -1;
    int firstSma = INT_MAX;
    int secSma = INT_MAX;
    for (int i=0; i<a.size(); i++){
        if (a[i]>firstLar){
            secLar = firstLar;
            firstLar = a[i];
        }

        else if(a[i]<firstLar && a[i]>secLar){
            secLar = a[i];
        }
    }

    for (int i=0; i<a.size(); i++){
        if (a[i]<firstSma){
            secSma = firstSma;
            firstSma = a[i];
        }
        else if (a[i]>firstSma && a[i]<secSma){
            secSma = a[i];
        }
    }

    vector<int> output;
    output.push_back(secLar);
    output.push_back(secSma);

    return output;
    

    
}
