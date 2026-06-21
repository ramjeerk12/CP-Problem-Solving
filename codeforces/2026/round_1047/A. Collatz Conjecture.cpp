// Contest: Codeforces Round 1047
// File: A. Collatz Conjecture.cpp
// Date: 2026-06-19

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {

        ll k, x;
        cin >> k >> x;

        while(k){
            x = 2*x;
            k--;
        }

        cout << x << "\n";
        
    }
}