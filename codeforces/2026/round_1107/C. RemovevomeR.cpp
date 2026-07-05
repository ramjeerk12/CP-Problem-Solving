// Contest: Codeforces Round 1107
// File: C. RemovevomeR.cpp
// Date: 2026-07-05

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        string s; cin >> s;
        
        int transitions = 0;

        for(int i = 0; i < n-1; i++ ){
            if(s[i] != s[i+1]) transitions++;
        }

        if(transitions == 1) {
            cout << 2 << "\n";
        }else{
            cout << 1 << "\n";
        }

    }
}