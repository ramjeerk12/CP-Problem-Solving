// Contest: Codeforces Round 1080
// File: B. Heapify 1.cpp 
// Date: 2026-04-07

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int findGreatestPowerOfTwo(int a){
    int greatValue = 1;
    for(int i = 0; i < a; i++){
        int divisor = pow(2,i);
        if(a % divisor == 0) greatValue = divisor;
        else return greatValue;
    }
    
    return greatValue;
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];

        bool isSorted = true;

        for(int i = 1; i <= n; i++){
            int indGrVal = findGreatestPowerOfTwo(i); //greater value of 2^m which divide i
            int valGrVal = findGreatestPowerOfTwo(a[i-1]); //greater value of 2^m which divide a[i-1]

            if((i/indGrVal) != (a[i-1]/valGrVal )){
                cout << "NO\n";
                isSorted= false;
                break;
            }
        }

        if(isSorted){
            cout << "YES\n";
        }
    }

    return 0;
}