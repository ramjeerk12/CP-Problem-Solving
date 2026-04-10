// Contest: Codeforces Round 1080
// File: A. Sieve of Erato67henes.cpp
// Date: 2026-04-07

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>a(n, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool isOne, isOther = false;
        isOne = isOther;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) isOne = true;
            else if(a[i] == 67) isOther = true;

        }

        if( (isOne && isOther) || isOther ){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
}